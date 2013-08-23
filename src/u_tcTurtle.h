/*
 * u_tcTurtle.h
 *
 *  Created on: Jul 31, 2013
 *      Author: Dad
 */

#ifndef U_TCTURTLE_H_
#define U_TCTURTLE_H_

class tcTurtle {
public:
	tcTurtle();
	virtual ~tcTurtle();

	virtual void PenUp() = 0;
	virtual void PenDown() = 0;
	virtual void Forward(int distance) = 0;
	virtual void Turn(int degrees) = 0;
	virtual void GoTo(int x, int y) = 0;
	virtual int GetX() const = 0;
	virtual int GetY() const = 0;
};

#endif /* U_TCTURTLE_H_ */
