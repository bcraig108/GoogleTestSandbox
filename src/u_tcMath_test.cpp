/*
 * u_tcMath_test.cpp
 *
 *  Created on: Jun 27, 2013
 *      Author: bmcraig
 */

#include "u_tcMath.h"

#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST( tcMath, Factorial_HandlesZeroInput )
{
	EXPECT_EQ( 1, tcMath::Factorial(0) );
}

TEST( tcMath, Factorial_HandlesPositiveInput )
{
	EXPECT_EQ(     1, tcMath::Factorial(1) );
	EXPECT_EQ(     2, tcMath::Factorial(2) );
	EXPECT_EQ(     6, tcMath::Factorial(3) );
	EXPECT_EQ( 40320, tcMath::Factorial(8) );
}

//TEST( tcMath, Factorial_ExpectFailureWrongValue )
//{
//	EXPECT_EQ( 40321, tcMath::Factorial(8) );
//}

//TEST( tcMath, Factorial_ExpectFailureNEQ )
//{
//	EXPECT_NE( 40320, tcMath::Factorial(8) );
//}

TEST( tcMath, IsPrime_HandlesOne )
{
	EXPECT_TRUE( tcMath::IsPrime(1) );
}

TEST( tcMath, IsPrime_Primes )
{
	EXPECT_TRUE( tcMath::IsPrime(2) );
	EXPECT_TRUE( tcMath::IsPrime(3) );
	EXPECT_TRUE( tcMath::IsPrime(5) );
	EXPECT_TRUE( tcMath::IsPrime(7) );
	EXPECT_TRUE( tcMath::IsPrime(11) );
}

TEST( tcMath, IsPrime_NonPrimes )
{
	EXPECT_FALSE( tcMath::IsPrime(4) );
	EXPECT_FALSE( tcMath::IsPrime(6) );
	EXPECT_FALSE( tcMath::IsPrime(8) );
	EXPECT_FALSE( tcMath::IsPrime(9) );
	EXPECT_FALSE( tcMath::IsPrime(10) );
}

TEST( tcMath, Mean )
{
	double larNumbers[] = { 5.0, 6.0, 7.0, 8.0 };

	EXPECT_DOUBLE_EQ( 5.0, tcMath::Mean( larNumbers, 1 ) );
	EXPECT_DOUBLE_EQ( 5.5, tcMath::Mean( larNumbers, 2 ) );
	EXPECT_DOUBLE_EQ( 6.0, tcMath::Mean( larNumbers, 3 ) );
	EXPECT_DOUBLE_EQ( 6.5, tcMath::Mean( larNumbers, 4 ) );
}
