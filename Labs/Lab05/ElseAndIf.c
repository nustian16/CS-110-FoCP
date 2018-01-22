#include <stdio.h>
#include <stdlib.h>

int main()
{
	int temp = 30;
	
	if( temp < 32 )
	{
		printf( "Water is in solid ice state.\n" );	
	}
	else if( temp < 212)
	{
		printf( "Water is in liquid water state.\n" );	
	}
	else	
	{
		printf( "Water is in gaseous steam state.\n" );
	}
	
	return EXIT_SUCCESS;
}