#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#define MAX_STRING_LENGTH 80

int main()
{
	int age;
	char height[MAX_STRING_LENGTH];
	float weight;

	printf( "How old are you? ");
	scanf( "%d", &age );
	
	printf( "How tall are you? ");
	scanf( "%s", &height );
	
	printf( "How much do you weigh? ");
	scanf( "%f", &weight );
		
	printf( "So you're %d old, %s tall and %.1f heavy.\n", age, height, weight );

	return EXIT_SUCCESS;
}