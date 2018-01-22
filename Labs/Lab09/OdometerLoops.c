#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay( int );

int main()
{
	for ( int thous=0; thous<10; thous++ )
	{
		for ( int hund=0; hund<10; hund++ )
		{
			for ( int tens=0; tens<10; tens++ )
			{
				for ( int ones=0; ones<10; ones++ )
				{
					printf( " %d%d%d%d\r", thous, hund, tens, ones );					
					delay( 10 );
				}
			}
		}
	}

	printf("\n");
	
	return EXIT_SUCCESS;
}

void delay(int milliseconds)
{
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now - then) < pause )
        now = clock();
}