/*
 * u_tcMath.h
 *
 *  Created on: Jun 27, 2013
 *      Author: bmcraig
 */

#ifndef U_TCMATH_H_
#define U_TCMATH_H_

class tcMath {
public:

	tcMath();

	virtual ~tcMath();

	static int Factorial( int anNumber );

	static bool IsPrime( int anNumber );

	static double Mean( const double* aarNumbers, int anCount );
};

#endif /* U_TCMATH_H_ */
