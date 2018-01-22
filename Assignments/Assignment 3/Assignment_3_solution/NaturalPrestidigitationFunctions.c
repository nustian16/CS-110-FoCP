    /********************************************************
 * NaturalPrestidigitationFunctions.c -- utility functions for digit pattern problem. *
 * *
 * Author. <ADD YOUR NAME HERE!!!> .*
 * *
 * Purpose. function definitions for different digit utilities. *
 * *
 * Usage. *
 * Call the functions in main() to compute digit properties. *
 ********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include "NaturalPrestidigitationFunctions.h"

/*
 * countDigits(num)
 * calculates the number of digits in the integer num.
 */

int countDigits( int num )
{
    int count = 0;
    //If the number is in between 1 and 9 then count will be returned 1
    if (num >= 0 && num <= 9)
    {   count = 1;
        return count;
    }
    //if number is greater number 10 then it will be divided until becomes zero
    //each time count will be incremented by one.
    if ( num >= 10 )
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }
    return count;
}

/*
 * nthDigitBack(n,num)
 * finds the nth lowest order digit in num
 */

int nthDigitBack( int n, int num )
{
    int i, result = 0;
    //This function takes input from user and calculate the mode that
    //many times because mod will give the nth digit from right
    for (i = 0; i <= n; i++)
    {
        result = num % 10;
        num = num / 10;
    }
    return result;
}

/*
 * nthDigit(n,num)
 * finds the nth highest order digit of num
 */

int nthDigit( int n, int num )
{
    // This function is made using previous two functions
    // from first function we will get the number of digits
    // then we use second function in such a way that it
    // computes as (total - nth digit - 1)
    int result1;
    int result = countDigits(num);
    result1 = nthDigitBack((result-1)-n, num);
    return result1;
}

/*
 * nthDigitTallyOne1(n, num, tally)
 * assumes that tally is a 10 element list tallying the number of nth digits seen so far.
 * It updates tally to reflect the nth digit of num.
 */

int nthDigitTallyOne( int n, int num, int tally[] )
{
    // This function uses previous function to get the nth digit
    // and increment the number in array at position of that digit
    int result = nthDigit(n, num);
    tally[result]++;
    return tally[result];
}


/*
 * nthDigitTally(n, nums)
 * returns a tally of frequencies of 0–9
 * as the nth digits of all the numbers in nums.
 */

int* nthDigitTally(int n, int len, int nums[])
{
    // this function uses third function to get the nth digit of given array
    //then it will compare with the return array if the digit match then return
    //array will be increment by one at that position.
	int a, b, c, d;
	static int result[10]={0,0,0,0,0,0,0,0,0,0};
	for(a = 0; a < len; a++)
    {
        b = nthDigit(n , nums[a]);
        for( c = 0; c <= 9; c++)
        {
            if(b == c)
            {
                result[c]++;
            }
        }
    }
	return result;
	}
