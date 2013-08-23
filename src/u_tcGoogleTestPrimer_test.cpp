/*
 * tcGoogleTestPrimer_test.cpp
 *
 *  Created on: Jun 30, 2013
 *      Author: Dad
 */

#include "u_tcGoogleTestPrimer.h"

#include <gtest/gtest.h>

//
// Basic Assertions
//
// Fatal assertion          Nonfatal assertion       Verifies
// ======================== ======================== ==================
// ASSERT_TRUE(condition);  EXPECT_TRUE(condition);  condition is true
// ASSERT_FALSE(condition); EXPECT_FALSE(condition); condition is false
// ======================== ======================== ==================
TEST( tcGoogleTestPrimer, State ) {

	tcGoogleTestPrimer lcA;

	EXPECT_FALSE( lcA.IsState() );

	lcA.ToggleState();

	EXPECT_TRUE( lcA.IsState() );
}

//
// Binary Comparison
//
// Fatal assertion  			Nonfatal assertion           Verifies
// ============================ ============================ ==================
// ASSERT_EQ(expected, actual); EXPECT_EQ(expected, actual); expected == actual
// ASSERT_NE(val1, val2);       EXPECT_NE(val1, val2);  	 val1 != val2
// ASSERT_LT(val1, val2);       EXPECT_LT(val1, val2);  	 val1 < val2
// ASSERT_LE(val1, val2);       EXPECT_LE(val1, val2);  	 val1 <= val2
// ASSERT_GT(val1, val2);  		EXPECT_GT(val1, val2);  	 val1 > val2
// ASSERT_GE(val1, val2);  		EXPECT_GE(val1, val2);  	 val1 >= val2
// ============================ ============================ ==================
TEST( tcGoogleTestPrimer, Count ) {

	tcGoogleTestPrimer lcA;

	EXPECT_EQ( static_cast<unsigned int>( 0 ), lcA.GetCount() );
	EXPECT_NE( lcA.GetCount(), static_cast<unsigned int>( 1 ) );
    EXPECT_LT( lcA.GetCount(), static_cast<unsigned int>( 1 ) );
    EXPECT_LE( lcA.GetCount(), static_cast<unsigned int>( 1 ) );

    lcA.IncrementCount();
	EXPECT_GT( lcA.GetCount(), static_cast<unsigned int>( 0 ) );
	EXPECT_GE( lcA.GetCount(), static_cast<unsigned int>( 0 ) );
}

//
// String Comparison
//
// Fatal assertion               Nonfatal assertion            Verifies
// ============================= ============================= ===============
// ASSERT_STREQ(exp_str,         EXPECT_STREQ(exp_str,         the two C strings
//              act_str);                     act_str);        have the same
//                                                             content
// ASSERT_STRNE(str1, str2);     EXPECT_STRNE(str1, str2);     the two C strings
//                                                             have different
//                                                             content
// ASSERT_STRCASEEQ(exp_str,     EXPECT_STRCASEEQ(exp_str,     the two C strings
//                  act_str);                     act_str)     have the same
//                                                             content, ignoring
//                                                             case
// ASSERT_STRCASENE(str1, str2); EXPECT_STRCASENE(str1, str2); the two C strings
//                                                             have different
//                                                             content, ignoring
//                                                             case
// ============================= ============================= ===============
TEST( tcGoogleTestPrimer, Strings ) {

	tcGoogleTestPrimer lcA;

	EXPECT_STREQ( "tcGoogleTestPrimer", lcA.GetString().c_str() );
	EXPECT_STRNE( "tcGoogleTest", lcA.GetString().c_str() );
	EXPECT_STRCASEEQ( "tcgoogletestprimer", lcA.GetString().c_str() );
	EXPECT_STRCASENE( "tcgoogletest", lcA.GetString().c_str() );
}

// test fixtures

class tcGoogleTestPrimerTest : public ::testing::Test {
protected:
	virtual void SetUp( void ) {

		mcA.IncrementCount();
		mcA.IncrementCount();

		mcB.IncrementCount();
	};

	tcGoogleTestPrimer mcA;
	tcGoogleTestPrimer mcB;
};

TEST_F(tcGoogleTestPrimerTest, TestFixture) {
	EXPECT_EQ( static_cast<unsigned int>( 2 ), mcA.GetCount() );
	EXPECT_EQ( static_cast<unsigned int>( 1 ), mcB.GetCount() );
}
