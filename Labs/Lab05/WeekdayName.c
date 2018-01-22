
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* weekday_name( int); // function declaration

int main()
{
	printf( "Weekday 1: %s\n", weekday_name(1) );
	printf( "Weekday 2: %s\n", weekday_name(2) );
	printf( "Weekday 3: %s\n", weekday_name(3) );
	printf( "Weekday 4: %s\n", weekday_name(4) );
	printf( "Weekday 5: %s\n", weekday_name(5) );
	printf( "Weekday 6: %s\n", weekday_name(6) );
	printf( "Weekday 7: %s\n", weekday_name(7) );
	printf( "\n" );
	printf( "Weekday 17: %s\n", weekday_name(17) );
	printf( "Weekday -1: %s\n", weekday_name(-1) );
	
	return EXIT_SUCCESS;
}

#define MAX_STRING_LENGTH 80

char* weekday_name( int weekday ) // function definition
{
	char result[MAX_STRING_LENGTH] = "";
		
	char * result_ptr; // pointer to a string
	
	if ( weekday == 1 )
	{
		strcpy( result, "Sunday");
	}
	else if ( weekday == 2 )
	{
		strcpy( result, "Monday");
	}
	
	
	// your code comes here!!!
	
	
	result_ptr = result; // set pointer to return string variable
	
	return result_ptr;
}