/********************************************************
* Math -- program to do some math. *
* *
* Author: <your name>. *
********************************************************/
 
#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf( "I will now count my chickens:\n" );

	printf( "Hens %d\n", ( 25 + 30 / 6 ) );
	printf( "Roosters %d\n", ( 100 - 25 * 3 % 4 ) );

	printf( "Now I will count the eggs:\n" );

	printf( "%d\n", 3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6 );

	printf( "Is it true that 3 + 2 < 5 - 7?\n" );

	printf( "%s\n", ( ( 3 + 2 < 5 - 7 ) ? "true" : "false" ) );

	printf( "What is 3 + 2? %d\n", ( 3 + 2 ) );
	printf( "What is 5 - 7? %d\n", ( 5 - 7 ) );

	printf( "Oh, that's why it's false.\n" );

	printf( "How about some more.\n" );

	printf( "Is it greater? %s\n", ( ( 5 > -2 ) ? "true" : "false") );
	printf( "Is it greater or equal? %s\n", ( ( 5 >= -2 ) ? "true" : "false") );
	printf( "Is it less or equal? %s\n", ( ( 5 <= -2 ) ? "true" : "false") );
	
	return EXIT_SUCCESS;
}

/********************************************************
* Question. *
* Notice the math seems "wrong"? There are no fractions, only whole numbers. *
* Find out why by researching what a "floating point" number is. *
* *
* Answer. *
* <type your answer here> *
********************************************************/


