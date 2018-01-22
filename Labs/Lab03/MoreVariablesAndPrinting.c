#include <stdlib.h>
#include <stdio.h>

int main( void )
{
	char myName[]  = "Muaz Hashmi";
	char myEyes[]  = "Brown";
	char myTeeth[] = "White";
	char myHair[]  = "Black";
	
	int myAge    = 30; // not a lie
	int myHeight = 70; // inches
	int myWeight = 170; // lbs
	
	printf( "Let's talk about %s.\n", myName );
	printf( "He's %d inches tall.\n", myHeight );
	printf( "He's %d pounds heavy.\n", myWeight );
	printf( "Actually, that's not too heavy.\n" );
	printf( "He's got %s eyes and %s hair.\n", myEyes, myHair );
	printf( "His teeth are usually %s depending on the coffee.\n", myTeeth );

	// This line is tricky; try to get it exactly right.
	printf( "If I add %d, %d, and %d I get %d.\n"
	, myAge, myHeight, myWeight
	, (myAge + myHeight + myWeight) );
	
	return EXIT_SUCCESS;
}