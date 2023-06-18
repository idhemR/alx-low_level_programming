#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - the main function 
*
*Description: code that give if the random number selected by the machine is positive or negative or equal 0
*
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	printf("the number is positive");
	else if (n==0)
	printf("the number is zero");
	else
	printf("the number is negative");
	return (0);
}
