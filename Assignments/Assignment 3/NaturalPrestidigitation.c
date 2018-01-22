/********************************************************
 * NaturalPrestidigitation.c -- program to test the program. *
 * *
 * Author. @nis.*
 * *
 * Purpose. Demonstration of a pattern in digits. *
 * *
 * Usage. *
 * Runs the test module for utility functions, and call the mystery function. *
 ********************************************************/
 
 /* Warning. Do NOT modify the contents of this file. */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"

#include "NaturalPrestidigitationFunctions.h"
#include "NaturalPrestidigitationTests.h"

void readMysteriousNumbers();

char* getfield(char* , int );
void printTally( int, int[] );

int main( void )
{	
	runTests();
		
	//readMysteriousNumbers();
	
	return EXIT_SUCCESS;
}

/* 
 * readMysteriousNumbers 
 * reads integers from input (terminated by end-of-file) and 
 * returns a list of the numbers suitable as input to nthDigitTally.
 */

void readMysteriousNumbers()
{
	printf( "\n *** Mystery numbers ***\n\n" );

	int* numbers = ( int* ) malloc ( MAX_LEN *sizeof(int) );	
	
    FILE* stream = fopen("WFPPakistanEducationAtlas2010V.csv", "r");	

    char line[1024];	
	fgets( line, 1024, stream ); /* to ignore header in csv file */
	
	int len = 0;
    while ( fgets( line, 1024, stream) )
    {
        char* tmp = strdup( line );		
		numbers[len] = atoi( getfield( tmp, 7) );
		++len;
        // NOTE strtok clobbers tmp
		free(tmp);        
    }
	
	int *tally = nthDigitTally( 2, len, numbers ); 
	printTally( len, tally );
				
	free( numbers );	
}

/* 
 * printTally(len,tally)
 * prints list of 10 values: 
 * the frequency with which each digit 0–9 appears as the nth digit
 */
 
void printTally( int len, int tally[] )
{
	for ( int i = 0; i < BASE; ++i )
		printf( "%ds: %d (%d%%)\n", i, tally[i], (int)( tally[i] / (len*1.0) * 100 ) );
}

/* 
 * getfield(line,num)
 * return a string with content of num(th) column 
 * from the input comma-separated file
 */
 
char* getfield(char* line, int num)
{
    char* tok;
    for (tok = strtok(line, ",");
            tok && *tok;
            tok = strtok(NULL, ",\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}