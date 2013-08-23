/*
 * u_tcPainter.cpp
 *
 *  Created on: Aug 13, 2013
 *      Author: Dad
 */

#include "u_tcPainter.h"

#include "u_tcTurtle.h"


tcPainter::tcPainter( tcTurtle& arcTurtle ) : mrcTurtle( arcTurtle ) {}


tcPainter::~tcPainter() {}


bool tcPainter::DrawLine( void )
{
	mrcTurtle.GoTo( 10, 10 );
	mrcTurtle.GetX();
	mrcTurtle.PenDown();
	mrcTurtle.Forward( 10 );
	mrcTurtle.PenUp();
	mrcTurtle.GetX();

	return true;
}


bool tcPainter::DrawSquare( void )
{
	mrcTurtle.GoTo( 20, 20 );
	mrcTurtle.PenDown();

	for ( unsigned side = 0; side < 4; side++ )
	{
		mrcTurtle.Forward( 10 );
		mrcTurtle.Turn( 90 );
	}

	mrcTurtle.PenUp();

	return true;
}
