/*
 * u_tcMyClass.h
 *
 *  Created on: Jun 6, 2013
 *      Author: bmcraig
 */

#ifndef U_TCMYCLASS_H_
#define U_TCMYCLASS_H_

#include <string>

class tcMyClass {

public:

	tcMyClass( void );

	virtual ~tcMyClass( void );

	bool MyPublicMethodThatTakesTimeToRun( void );

	std::string PrintMe( void );

protected:

	double MyProtectedMethod( void );

	bool   mbMyProtectedBool;
	int    mnMyProtectedInt;
	double mrMyProtectedDouble;

private:

//	float mrMyPrivateFloat;
};

#endif /* U_TCMYCLASS_H_ */
