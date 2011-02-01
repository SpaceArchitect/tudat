/*! \file randomNumberGenerator.h
 *    This header file contains a class and struct for generating random
 *    numbers.
 *
 *    Path              : /Mathematics/
 *    Version           : 6
 *    Check status      : Checked
 *
 *    Author            : K. Kumar
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : K.Kumar@tudelft.nl
 *
 *    Checker           : D. Dirkx
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : D.Dirkx@student.tudelft.nl
 *
 *    Date created      : 7 October, 2010
 *    Last modified     : 21 January, 2010
 *
 *    References
 *      Press W.H., et al. Numerical Recipes in C++: The Art of
 *          Scientific Computing. Cambridge University Press, February 2002.
 *
 *    Notes
 *      The random number generator implemented here is well documented in
 *      (Press et al., 2002), where the details of the algorithm steps are
 *      explained. The distinction between 64-bit and 32-bit arithmetic is
 *      based on the computer system being used to run simulations. For more
 *      information, refer to (Press et al., 2002). The use of the 'long long'
 *      variable type is to support 64-bit arithmetic in C++.
 *
 *      It should be noted that the behaviour of "long int" on 32-bit systems
 *      might not result in a correct random number. Even if it does, it will
 *      not generate the same random number for the same seed number on 64-bit
 *      systems.
 *
 *    Copyright (c) 2010 Delft University of Technology.
 *
 *    This software is protected by national and international copyright.
 *    Any unauthorized use, reproduction or modification is unlawful and
 *    will be prosecuted. Commercial and non-private application of the
 *    software in any form is strictly prohibited unless otherwise granted
 *    by the authors.
 *
 *    The code is provided without any warranty; without even the implied
 *    warranty of merchantibility or fitness for a particular purpose.
 *
 *    Changelog
 *      YYMMDD    author        comment
 *      101007    K. Kumar      First creation of code.
 *      101015    K. Kumar      Added RandomNumbers structure.
 *      101020    K. Kumar      Consolidated code into single class and
 *                              completed code comments. Object can now only be
 *                              created by explicit seeding.
 *      101025    K. Kumar      Updated code based on D. Dirkx's codecheck
 *                              comments.
 *      110117    K. Kumar      Corrected path.
 *      110121    K. Kumar      Added comment to "Notes".
 */

#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

// Include statements.
#include <cmath>
#include <exception>
#include <climits>
#include "basicMathematicsFunctions.h"

//! Random number generator class.
/*!
 * This class contains random number generators.
 */
class RandomNumberGenerator
{
public:

    //! Customized constructor to pass random number generator seed.
    /*!
     * Customized constructor to seed random number generator with specific
     * seed.
     * \param seed Random number generator seed.
     */
    RandomNumberGenerator( unsigned long long seed );

    //! Default destructor.
    /*!
     * Default destructor.
     */
    ~RandomNumberGenerator( );

    //! Get uniformly distributed random integer.
    /*!
     * This function returns an uniformly distributed random integer using
     * 64-bit arithmetic.
     * \return Uniformly distributed random integer.
     */
     unsigned long long getUniformlyDistributedRandom64BitInteger( );

    //! Get uniformly distributed, normalized, random double.
    /*!
     * This function returns a uniformly distributed, normalized, random
     * double within the interval [0,1].
     * \return Uniformly distributed, normalized, random double.
     */
    double getUniformlyDistributedNormalizedRandomDouble( );

    //! Get uniformly distributed random integer using 32-bit arithmetic.
    /*!
     * This function returns a uniformly distributed random integer using
     * 32-bit arithmetic.
     * \return Uniformly distributed random integer.
     */
    unsigned int getUniformlyDistributedRandom32BitInteger( );

    //! Get random plus/minus sign.
    /*!
     * This function returns a random plus/minus sign as an integer.
     * \return Random plus/minus sign integer.
     */
    int getRandomPlusMinusSign( );

protected:

private:

    //! Internal random number generator parameter.
    /*!
     * Internal random number generator parameter.
     */
    unsigned long long randomNumberParameter1_;

    //! Internal random number generator parameter.
    /*!
     * Internal random number generator parameter.
     */
    unsigned long long randomNumberParameter2_;

    //! Internal random number generator parameter.
    /*!
     * Internal random number generator parameter.
     */
    unsigned long long randomNumberParameter3_;
};

#endif // RANDOMNUMBERGENERATOR_H

// End of file.