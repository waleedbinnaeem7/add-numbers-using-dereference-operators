#include <stdio.h>

int main() {
	int x, y;
	int *p1, *p2;

	// Input the first number
	printf("Enter the first value: ");
	scanf("%d", &x);

	// Input the second number
	printf("Enter the second value: ");
	scanf("%d", &y);

	// Pointers point to the addresses of the values
	p1 = &x;
	p2 = &y;

	// Perform dereference o
	*p1 = *p1 + *p2;

	// Output 
	printf("Sum of %d and %d is: %d\n", x, *p2, x);

	return 0;
}
