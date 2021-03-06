#include "stdafx.h"
int gcd(int n1, int n2) {
	int gcd = 1;
	int k = 2;
	while (k <= n1 && k <= n2) {
		if (n1 % k == 0 && n2 % k == 0)
			gcd = k;
		k++;
	}
	//Return gcd
	return gcd;
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