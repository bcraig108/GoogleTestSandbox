/*
 * u_tcPainter.h
 *
 *  Created on: Aug 13, 2013
 *      Author: Dad
 */

#ifndef U_TCPAINTER_H_
#define U_TCPAINTER_H_

class tcTurtle;

class tcPainter {
public:

	tcPainter( tcTurtle& arcTurtle );

	virtual ~tcPainter();

	bool DrawLine();

	bool DrawSquare();

protected:

	tcTurtle& mrcTurtle;
};

#endif /* U_TCPAINTER_H_ */
