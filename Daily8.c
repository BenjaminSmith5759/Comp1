/****************************
Author: Ben Smith
Date: 9/24/19
Purpose: This program determines if a given interger is even or odd, then changes the vlaue of that integer
in different ways depending on whether it was even or odd. It then stores this new value in the varable "number".
****************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int number;
	printf("Please enter a positive integer: ");
	scanf("%d", &number);
	if (number % 2 == 0)
	{
		printf("The next value of the number is: %d", number/2);
	}
	else
	{
		printf("The next value of the number is: %d", number * 3 + 1);
	}
	return 0;
}