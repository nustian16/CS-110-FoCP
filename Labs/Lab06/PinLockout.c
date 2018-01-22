#include <stdio.h>
#include <stdlib.h>

int main( )
{		
	int pin = 1234;
	int tries = 0;
	int entry = 0;

	printf( "WELCOME TO THE SEECS BANK.\n" );
	
	printf("\nENTER YOUR PIN: ");
	scanf( " %d", &entry );
	tries++;

	while ( entry != pin && tries < 3 )
	{
		printf("\nINCORRECT PIN. TRY AGAIN.\n");
		
		printf("ENTER YOUR PIN: ");
		scanf( " %d", &entry );
		tries++;
	}

	if ( entry == pin )
		printf("\nPIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT.\n");
	else if ( tries >= 3 )
		printf("\nYOU HAVE RUN OUT OF TRIES. ACCOUNT LOCKED.\n");
	
	return EXIT_SUCCESS;
}