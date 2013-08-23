/*
 * u_tcMyClass_test.cpp
 *
 *  Created on: Jun 6, 2013
 *      Author: bmcraig
 */

#include "u_tcMyClass.h"
#include "gtest/gtest.h"
#include <time.h>

/**
 * cannot test private members of classes, but protected members can be tested
 * using a child class that makes the protected members public
 */
class tcMyClass_Test : public tcMyClass
{
public:
	using tcMyClass::mbMyProtectedBool;
	using tcMyClass::mnMyProtectedInt;
	using tcMyClass::mrMyProtectedDouble;
	using tcMyClass::MyProtectedMethod;
};

/**
 * Plain vanilla test to check constructor values using EXPECT_EQ
 */
TEST( tcMyClass, ctor_Default )
{
	tcMyClass_Test lcMyClass;

	EXPECT_EQ(   true, lcMyClass.mbMyProtectedBool   );
	EXPECT_EQ(     75, lcMyClass.mnMyProtectedInt    );
	EXPECT_EQ( 3.1415, lcMyClass.mrMyProtectedDouble );
}

/**
 * Plain vanilla test to checking return value using EXPECT_EQ
 */
TEST( tcMyClass, MyProtectedMethod_Default )
{
	tcMyClass_Test lcMyClass;

	EXPECT_EQ( 235.6125, lcMyClass.MyProtectedMethod() );
}

/**
 * Test to check execution time, also uses EXPECT_TRUE and EXPECT_LT
 */
TEST( tcMyClass, MyPublicMethodThatTakesTimeToRun_Timing )
{
	tcMyClass_Test lcMyClass;

	time_t lsTime1;
	time( &lsTime1 );

	EXPECT_TRUE( lcMyClass.MyPublicMethodThatTakesTimeToRun() );

	time_t lsTime2;
	time( &lsTime2 );

	EXPECT_LT( difftime( lsTime2, lsTime1 ), 20.0 );
}

/**
 * Test to look for part of a string
 */
TEST( tcMyClass, PrintMe_Default )
{
	tcMyClass_Test lcMyClass;

	EXPECT_NE( lcMyClass.PrintMe().find( "State" ), std::string::npos );
}

/**
 * Test to look for part of a string
 */
TEST( tcMyClass, PrintMe_NegativeTest )
{
	tcMyClass_Test lcMyClass;

	EXPECT_EQ( lcMyClass.PrintMe().find( "state" ), std::string::npos );
}
