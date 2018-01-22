/********************************************************
* Printing -- program to print out some text. *
* *
* Author: <your name>. *
********************************************************/
 
#include <stdlib.h>
#include <stdio.h>

int main()
{
	// A comment, this is so you can read your program later.
	// Anything after the // is ignored by C/C++/Java.

	printf( "I could have code like this.\n" ); // and the comment after is ignored.

	/* Want to use C-style to comment */
	
	/* You can even write comments 
	spanning multiple lines 
	using the C-style */
	
	// You can also use a comment to "disable" or comment out a piece of code:
	// printf( "This won't run.\n" );

	printf( "This will run.\n" );
	
	return EXIT_SUCCESS;
}