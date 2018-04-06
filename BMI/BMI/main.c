#include<stdio.h>

int main(void) {
	double weight;
	double height;
	printf("Please enter your weight In Kilograms and height In Meters.\n");
	printf("And I will tell you the BMI: ");
	scanf("%lf%lf", &weight, &height);

	double BMI;
	BMI = weight / (height * height);

	if (BMI < 18.5) {
		printf("Underweight\n");
	}
	if (18.5 <= BMI && BMI < 24.9) {
		printf("Normal\n");
	}
	if (24.9 <= BMI && BMI < 29.9) {
		printf("Overweight\n");
	}
	if (BMI >= 30) {
		printf("Obese\n");
	}
}