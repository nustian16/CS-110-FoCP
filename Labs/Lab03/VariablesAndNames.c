#include <stdlib.h>
#include <stdio.h>

int main( void )
{
	int 
	cars
	, drivers
	, passengers
	, cars_not_driven
	, cars_driven;
	
	float 
	space_in_a_car
	, carpool_capacity
	, average_passengers_per_car;

	cars = 100;
	space_in_a_car = 4.0;
	drivers = 30;
	passengers = 90;
	cars_not_driven = cars - drivers;
	cars_driven = drivers;
	carpool_capacity = cars_driven * space_in_a_car;
	average_passengers_per_car = passengers / cars_driven;

	printf( "There are %d cars available.\n", cars );
	printf( "There are only %d drivers available.\n", drivers );
	printf( "There will be %d empty cars today.\n", cars_not_driven );
	printf( "We can transport %.1f people today.\n", carpool_capacity );
	printf( "We have %d to carpool today.\n", passengers );
	printf( "We need to put about %.1f in each car.\n", average_passengers_per_car );
	
	return EXIT_SUCCESS;
}