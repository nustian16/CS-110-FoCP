#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int GetRandRange( int N, int M ) 
{ 
	return M + rand() / (RAND_MAX / (N - M + 1) + 1); 
}

int main ()
{
	int a, b;
	
	// initialize random seed
	srand (time(NULL));
  
	// roll the two dices a and b
	a = GetRandRange(1,6);
	b = GetRandRange(1,6);


	// your code comes here!
  

	return EXIT_SUCCESS;
}