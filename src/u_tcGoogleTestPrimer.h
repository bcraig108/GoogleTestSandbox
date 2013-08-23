/*
 * u_tcGoogleTestPrimer.h
 *
 *  Created on: Jun 30, 2013
 *      Author: Dad
 */

#ifndef TCGOOGLETESTPRIMER_H_
#define TCGOOGLETESTPRIMER_H_

#include <string>

/**
 * @brief Is used to demonstrate the basic Google Test (gtest) usage as
 *        described in the
 *        <A HREF="http://code.google.com/p/googletest/wiki/V1_6_Primer">
 *        Google Test Primer</A>
 */
class tcGoogleTestPrimer
{
public:

	/**
	 * @brief The class constructor
	 */
	tcGoogleTestPrimer();

	/**
	 * @brief The class destructor
	 */
	virtual ~tcGoogleTestPrimer();

	/**
	 * @brief This method increments the count
	 */
	void IncrementCount( void )	{
		mnCount++;
	}

	/**
	 * @brief This method returns the count
	 * @return count
	 */
	unsigned int GetCount( void ) const {
		return mnCount;
	}

	/**
	 * @brief This method returns the state
	 * @return state
	 */
	bool IsState( void ) const {
		return mbState;
	}

	/**
	 * @brief This method toggles the state
	 */
	void ToggleState( void ) {
		mbState = !mbState;
	}

	/**
	 * @brief This method returns the string
	 * @return the string
	 */
	std::string GetString( void ) {
		return mcString;
	}

private:

	/**
	 * @brief counter
	 */
	unsigned int mnCount;

	/**
	 * @brief state
	 */
	bool mbState;

	/**
	 * @brief the string
	 */
	std::string mcString;
};

#endif /* TCGOOGLETESTPRIMER_H_ */
