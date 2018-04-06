#include "stdafx.h"

int gcd(int n1, int n2) {
	if (n2 == 0) 
		return n1;
	else
		return gcd(n2, n1 % n2);  
}
int main(void) {
		int n1, n2;
		//Prompt the user to enter two integers
		printf("Enter first integer: ");
		scanf_s("%d", &n1);
		printf("Enter second integer: ");
		scanf_s("%d", &n2);
		//Print the gcd between two integers
		printf("The greatest common divisor for %d and %d is %d\n", n1, n2, gcd(n1, n2));
}


