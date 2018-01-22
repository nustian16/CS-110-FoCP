#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int FlipCoin() {
    int result = 1 + rand() % 2;

    return result == 1;
}

int main()
{
	// initialize random seed
	srand (time(NULL));
	
	char again;

	char coin[] = "";	
	while ( again == 'y' )
	{
		int flip = FlipCoin();
		
		if ( flip == 1 )
			strcpy( coin, "HEADS" );
		else
			strcpy( coin, "TAILS" );

		printf( "You flip a coin and it is... %s\n", coin );

		printf( "Would you like to flip again (y/n)? " );
		scanf( " %c", &again );
	}
	
	return EXIT_SUCCESS;
}