/********************************************************
 * NaturalPrestidigitationTests.c -- functions to run tests. *
 * *
 * Author. @nis.*
 * *
 * Purpose. Testing of the digit utility functions. *
 * *
 * Usage. *
 * Make calls to test the working of digit utility functions. *
 ********************************************************/
 
 /* Warning. Do NOT modify the contents of this file. */

#include <stdio.h>
#include <assert.h>

#include "types.h"

#include "NaturalPrestidigitationFunctions.h"
#include "NaturalPrestidigitationTests.h"

void runTests()
{	
	printf( "\nRunning tests ...\n\n" );
	
	test_countDigits();	
	test_nthDigitBack();
	test_nthDigit();
	test_nthDigitTallyOne();
	test_nthDigitTally();
	
	printf( "\nAll tests complete.\n" );
}

void test_countDigits()
{	
	assert( countDigits( 1   ) == 1 );
	assert( countDigits( 12  ) == 2 );
	assert( countDigits( 323 ) == 3 );
	
	printf( "PASSED. CountDigits()\n" );
}

void test_nthDigitBack() 
{		
	assert( nthDigitBack( 0, 123 ) == 3 );
	assert( nthDigitBack( 1, 123 ) == 2 );
	assert( nthDigitBack( 2, 123 ) == 1 );
	assert( nthDigitBack( 3, 123 ) == 0 );
	assert( nthDigitBack( 0, 0 )   == 0 );
	assert( nthDigitBack( 3, 18023 ) == 8 );
			
	printf( "PASSED. nthDigitBack()\n" );
}

void test_nthDigit() 
{	
	assert( nthDigit( 0, 123 ) == 1 );
	assert( nthDigit( 1, 123 ) == 2 );
	assert( nthDigit( 2, 123 ) == 3 );
	assert( nthDigit( 3, 123 ) == 0 );
	assert( nthDigit( 0, 0 ) == 0 );
	assert( nthDigit( 3, 18023 ) == 2 );

	printf( "PASSED. nthDigit()\n" );
}

void test_nthDigitTallyOne()
{	
	int tally1[BASE] = { 0,0,1,2,0,0,3,0,9,0 };
	nthDigitTallyOne( 2, 1072, tally1 );
	assert( tally1[7] == 1 );
	
	int tally2[BASE] = { 0,0,1,2,0,0,3,0,9,0 };
	nthDigitTallyOne( 0, 2541, tally2 );
	assert( tally2[2] == 2 );
	
	printf( "PASSED. nthDigitTallyOne()\n" );
}

void test_nthDigitTally()
{
	int enrollments[] = { 12176,5476,543,3490,24892,28619,2595,603,2527,1465,1858 };
	int *tally = nthDigitTally( 0, NELEMS(enrollments), enrollments );
	
	// printTally( NELEMS(enrollments), tally );
	
	assert( tally[0] == 0 );
	assert( tally[1] == 3 );
	assert( tally[2] == 4 );
	assert( tally[3] == 1 );
	assert( tally[4] == 0 );
	assert( tally[5] == 2 );
	assert( tally[6] == 1 );
	assert( tally[7] == 0 );
	assert( tally[8] == 0 );
	assert( tally[9] == 0 );
	
	printf( "PASSED. nthDigitTally()\n" );
}