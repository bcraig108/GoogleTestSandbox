/*
 * u_tcGoogleTestAssertions_test.cpp
 *
 *  Created on: Aug 24, 2013
 *      Author: Dad
 */

#include "u_tcGoogleTestAssertions.h"

#include <gtest/gtest.h>

/**
 * @brief Explicit Success and Failure
 *
 * @details These three assertions do not actually test a value or expression.
 *          Instead, they generate a success or failure directly. Like the
 *          macros that actually perform a test, you may stream a custom
 *          failure message into the them.
 */
TEST( tcGoogleTestAssertions, Value ) {

	tcGoogleTestAssertions lcTest1( 10 );
	unsigned lnValue1 = lcTest1.GetValue();

	if ( lnValue1 == 10 )
	{
		SUCCEED();	// Generates a success. This does NOT make the overall test
					// succeed. A test is considered successful only if none of
					// its assertions fail during its execution.
	}
	else
	{
		// generates a fatal failure
		FAIL() << "GetValue() returned unexpected value: " << lnValue1;
	}

	tcGoogleTestAssertions lcTest2( 20 );
	unsigned lnValue2 = lcTest2.GetValue();

	if ( lnValue2 != 20 )
	{
		// generates a non-fatal failure
		ADD_FAILURE() << "GetValue() returned unexpected value: " << lnValue2;
	}

	tcGoogleTestAssertions lcTest3( 30 );
	unsigned lnValue3 = lcTest3.GetValue();

	if ( lnValue3 != 30 )
	{
		// generates a non-fatal failure
		ADD_FAILURE_AT( "u_tcGoogleTestAssertions.h", 30 )
				<< "GetValue() returned unexpected value: " << lnValue3;
	}
}

