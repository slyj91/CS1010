// largest_pair.c
// Read a positive integer and determine the largest digit pair
// in the integer.
#include <stdio.h>

int largest_digit_pair(int);

int main(void) {
	int num;

	printf("Enter positive integer: ");
	scanf("%d", &num);

	printf("Largest pair of digits in %d is %d\n", num, largest_digit_pair(num));
	return 0;
}

// Find the largest digit pair in n
// Precond: n > 0
int largest_digit_pair(int n)
{
	int prev;
	
	if(n/100==0)
	{
		return n%100;
	}
	
	prev = largest_digit_pair(n/100);

	if( n%100 > prev )
		return n%100;
	else
		return prev;
}

