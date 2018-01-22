#include <stdio.h>
#include <stdlib.h>

int main()
{
	int zombies = 20;
	int robots  = 30;
	int baby    = 1;
	
	if ( robots < zombies )
	{
		printf( "Too many zombies! The baby is doomed!\n" );
	}

	if ( robots > zombies )
	{
		printf( "Not many zombies! The baby is saved!\n" );
	}

	if ( baby == 0 )
	{
		printf( "The human race is extinct!\n" );
		printf( "The zombies starve to death!\n" );
	}
	
	if ( baby != 0 )
	{		
		printf( "The zombies are crazy for some brains!\n" );
	}
	
	return EXIT_SUCCESS;
}