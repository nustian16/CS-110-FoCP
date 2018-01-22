#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pin = 1234, entry;

	printf( "WELCOME TO THE SEECS BANK.\n" );
	printf( "ENTER YOUR PIN: " );
	scanf( "%d", &entry );

	while ( entry != pin )
	{
		printf( "\nINCORRECT PIN. TRY AGAIN.\n" );
		printf( "ENTER YOUR PIN: " );
		scanf( "%d", &entry );
	}

	printf("\nPIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT.");
	
	return EXIT_SUCCESS;
}