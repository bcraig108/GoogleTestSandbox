/*
 * u_tcMyClass.cpp
 *
 *  Created on: Jun 6, 2013
 *      Author: bmcraig
 */

#include "u_tcMyClass.h"

#include <unistd.h>

tcMyClass::tcMyClass() : mbMyProtectedBool( true ),
					     mnMyProtectedInt( 75 ),
					     mrMyProtectedDouble( 3.1415 )
{
}

tcMyClass::~tcMyClass()
{
}

bool tcMyClass::MyPublicMethodThatTakesTimeToRun( void )
{
	sleep( 10 );
	return true;
}

std::string tcMyClass::PrintMe( void )
{
	std::string lcString( "My State is: " );

	lcString.append( " mbMyProtectedBool = " + mbMyProtectedBool );
	lcString.append( " mnMyProtectedInt = " + mnMyProtectedInt );
//	lcString.append( " mrMyProtectedDouble = " + mrMyProtectedDouble );
	lcString.append( "\n" );

	return lcString;
}

double tcMyClass::MyProtectedMethod( void )
{
	// return some number
	return static_cast<double>( mnMyProtectedInt ) * mrMyProtectedDouble;
}

