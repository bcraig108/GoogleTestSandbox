/*
 * u_tcMath.cpp
 *
 *  Created on: Jun 27, 2013
 *      Author: bmcraig
 */

#include "u_tcMath.h"

tcMath::tcMath() {
	// TODO Auto-generated constructor stub

}

tcMath::~tcMath() {
	// TODO Auto-generated destructor stub
}

int tcMath::Factorial( int anNumber )
{
	int lnFactorial = 1;

	for ( int lnIndex = anNumber; lnIndex > 0; lnIndex-- )
	{
		lnFactorial *= lnIndex;
	}

	return lnFactorial;
}

bool tcMath::IsPrime( int anNumber )
{
	bool lbPrime = true;

	for ( int lnDenom = 2; lnDenom < anNumber; lnDenom++ )
	{
		if ( anNumber % lnDenom == 0 )
		{
			lbPrime = false;
			break;
		}
	}

	return lbPrime;
}

double tcMath::Mean( const double* aarNumbers, int anCount )
{
	double lrMean = 0;

	for ( int lnIndex = 0; lnIndex < anCount; lnIndex++ )
	{
		lrMean += aarNumbers[lnIndex];
	}

	return lrMean / anCount;
}
