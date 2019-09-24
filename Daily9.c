/********************************************************
Author: Ben Smith
Date: 9/24/19
Answer to question: If you enter a really high integer like 5000, this program can actually count up and down
to the given integer. If you use a recursive function, like in Daily 6, entering such a hihg integer would
cause stack overflow.
*********************************************************/

#include <stdio.h>

int loop_down_to_zero(x);

int loop_up_to_int(x);

int main(int argc, char* argv[])
{
	int x;
	printf("Please eneter a positive integer: ");
	scanf("%d", &x);
	loop_down_to_zero(x);
	printf("####\n");
	loop_up_to_int(x);
	return 0;
}

int loop_down_to_zero(x)
{
	while (x >= 0)
	{
		printf("%d\n", x);
		x = x - 1;
	}
}

int loop_up_to_int(x)
{
	int y;
	y = 0;
	while (y <= x)
	{
		printf("%d\n", y);
		y = y + 1;
	}
}