#include <stdio.h>
#include <stdlib.h>

int main()
{
	// this is #1 - I'll call it "CN"
	for ( char c='A'; c <= 'E'; c++ )
	{
		for ( int n=1; n <= 3; n++ )
		{
			printf( "%c %d\n", c, n );
		}
	}

	printf("\n\n");

	// this is #2 - I'll call it "AB"
	for ( int a=1; a <= 3; a++ )
	{
		for ( int b=1; b <= 3; b++ )
		{
			printf( "%d-%d ", a, b );
		}
		/* your code comes here!!! */
	}

	return EXIT_SUCCESS;
}
