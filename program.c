#include <stdlib.h>
#include <stdio.h>

#include <math.h>

/*

	This program calculates the sum of first N primes.
	N can be provided as a command line argument.
	Default N is 10.

	(this code intentionally contains a number of bugs)
 */

int
is_prime(int x)
{
	int i;

	if(x % 2 == 0)
	{
		return 0;
	}

	for(i = 2; i < sqrtf(x); i += 2)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}

	return 1;

}

int *
first_primes(int n)
{
	int primes[n];

	int count = 0;
	int x = 2;

	while(count < n)
	{
		if(is_prime(x))
		{
			primes[count] = x;
			count++;
			x += 2;
		}
	}

	return primes;
}


int
sum(int *array, int n)
{
	int sum;
	int i;
	for(i = 0; i < n; i++)
	{
		sum =+ array[i];
	}

	return 0;
}


int
main(int argc, char *argv[])
{

	int n = 10;

	if(argc = 2)
	{
		atoi(argv[2]);
	}

	int *primes = first_primes(n);
	int s = sum(primes, n);

	printf("%d\n", s);

	return 0;
}
