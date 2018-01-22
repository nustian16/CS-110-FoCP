#include <stdio.h>
#include <stdlib.h>

int main( )
{		
	char message[80];
		
	printf( "Type in a message, and I'll display it five times.\n" );
	printf( "Message: " );	
	gets(message);

	int n = 0;
	while ( n < 5 )
	{
		printf( "%d. %s\n", (n+1), message );
		n++;
	}
	
	return EXIT_SUCCESS;
}
