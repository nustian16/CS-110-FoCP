#include <stdio.h>
#include <stdlib.h>

int main( )
{
	char guestName1[] = "HAMZA";
	char guestName2[] = "ILSA";
	
	int totalNights;	
	int nightsSpent;
	double totalCost;

	printf( "How many nights do you plan to stay? " );
	scanf( "%d", &totalNights );
	
	printf( "\nTotal planned stay: %d nights.\n", totalNights );
	printf( "%s travels to Chitral....\n\n", guestName1 );
	
	nightsSpent = 0;
	totalCost = 0.0;
	while ( nightsSpent < totalNights )
	{
		printf( "%s spends a night.\n", guestName1 );
		nightsSpent++;
		totalCost += 1500.0;
		printf( "\tNights spent: %d\n", nightsSpent );
		printf( "\tNights left:  %d\n", totalNights - nightsSpent );
	}
	
	printf( "\nTotal cost of stay: Rs. %.2f\n", totalCost );
	
	printf( "\nTotal planned stay: %d nights.\n", totalNights );
	printf( "%s travels to Chitral....\n\n", guestName2 );
	
	nightsSpent = 0;
	totalCost = 0.0;
	do
	{
		printf( "%s spends a night.\n", guestName2 );
		nightsSpent++;
		totalCost += 1500.0;
		printf( "\tNights spent: %d\n", nightsSpent );
		printf( "\tNights left:  %d\n", totalNights - nightsSpent );
	}
	while ( nightsSpent < totalNights );
	
	printf( "\nTotal cost of stay: Rs. %.2f\n", totalCost );
	
	return EXIT_SUCCESS;
}