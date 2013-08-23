/*
 * u_tcPainter_test.cpp
 *
 *  Created on: Aug 13, 2013
 *      Author: Dad
 */

#include "u_tcPainter.h"

#include "u_tcTurtle_mock.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

//using ::testing::AtLeast;
using ::testing::Return;

TEST( tcPainter, DrawLine ) {

	tcTurtle_mock lcTurtle;

	EXPECT_CALL( lcTurtle, PenDown() ).Times( 1 );
	EXPECT_CALL( lcTurtle, GoTo( 10, 10 ) ).Times( 1 );
	EXPECT_CALL( lcTurtle, Forward( 10 ) ).Times( 1 );
	EXPECT_CALL( lcTurtle, PenUp() ).Times( 1 );
	EXPECT_CALL( lcTurtle, GetX() )
	    .Times( 2 )
	    .WillOnce( Return( 10 ) )
	    .WillOnce( Return( 20 ) );

	tcPainter lcPainter( lcTurtle );

	EXPECT_TRUE( lcPainter.DrawLine() );
}

//int main(int argc, char** argv)
//{
//  // The following line must be executed to initialize Google Mock
//  // (and Google Test) before running the tests.
//  ::testing::InitGoogleMock(&argc, argv);
//  return RUN_ALL_TESTS();
//}
