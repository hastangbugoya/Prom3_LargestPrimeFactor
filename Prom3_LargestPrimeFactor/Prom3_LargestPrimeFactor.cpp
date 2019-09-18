// Prom3_LargestPrimeFactor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "pch.h"
#include <iostream>

int main()
{
	unsigned long long n = 600851475143, i;
	while (n > 1)
	{
		i = 2;
		while (n % i > 0)
			i++;
		printf("\n%lld", i);
		n = n / i;
	}
	printf("\n--->%lld", i);
}
