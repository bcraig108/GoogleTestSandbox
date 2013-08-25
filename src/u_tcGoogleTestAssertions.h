/*
 * u_tcGoogleTestAssertions.h
 *
 *  Created on: Aug 24, 2013
 *      Author: Dad
 */

#ifndef U_TCGOOGLETESTASSERTIONS_H_
#define U_TCGOOGLETESTASSERTIONS_H_

class tcGoogleTestAssertions {
public:

	/**
	 * @brief The constructor
	 * @param anValue the value
	 */
	tcGoogleTestAssertions( unsigned anValue );

	/**
	 * @brief The destructor
	 */
	virtual ~tcGoogleTestAssertions( void );

	/**
	 * @brief This method returns the value
	 * @return the value
	 */
	unsigned GetValue( void ) {
		return mnValue;
	}

private:

	/**
	 * @brief The value
	 */
	unsigned mnValue;
};

#endif /* U_TCGOOGLETESTASSERTIONS_H_ */
