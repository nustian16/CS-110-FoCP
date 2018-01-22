#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char message[100];

	printf( "What is your message? " );
	gets( message );

	printf( "\nYour message is %d characters long.\n", strlen(message) );
	printf( "The first character is at position 0 and is '%c'.\n", message[0] );
	int lastpos = strlen(message) - 1;
	printf( "The last character is at position %d and is '%c'.\n", lastpos, message[lastpos] );
	printf( "\nHere are all the characters, one at a time:\n" );

	for ( int i=0; i<strlen(message); i++ )
	{
		printf( "\t%d - '%c'\n", i, message[i] );
	}

	int a_count = 0;

	for ( int i=0; i<strlen(message); i++ )
	{
		char letter = message[i];
		if ( letter == 'a' || letter == 'A' )
		{
			a_count++;
		}
	}

	printf( "\nYour message contains the letter 'a' %d times.\n", a_count );
}