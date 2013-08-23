/*
 * u_tcTurtle_mock.h
 *
 *  Created on: Aug 13, 2013
 *      Author: Dad
 */

#ifndef U_TCTURTLE_MOCK_H_
#define U_TCTURTLE_MOCK_H_

#include "u_tcTurtle.h"
#include "gmock/gmock.h"  // Brings in Google Mock.

class tcTurtle_mock : public tcTurtle
{
public:
	MOCK_METHOD0(PenUp, void());
	MOCK_METHOD0(PenDown, void());
	MOCK_METHOD1(Forward, void(int distance));
	MOCK_METHOD1(Turn, void(int degrees));
	MOCK_METHOD2(GoTo, void(int x, int y));
	MOCK_CONST_METHOD0(GetX, int());
	MOCK_CONST_METHOD0(GetY, int());
};

#endif /* U_TCTURTLE_MOCK_H_ */
