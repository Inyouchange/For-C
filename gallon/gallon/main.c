// Fig. 3.8: fig03_08.c
// Class average program with sentinel-controlled iteration
#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int counter; // number of grades entered
	float gallon; // grade value
	float miles;
	float total2;
	float total; // sum of grades
	float result;
	float average; // number with decimal point for average

	// initialization phase
	total = 0; // initialize total
	counter = 0; // initialize loop counter
	total2 = 0;
	result = 0;
	// processing phase
	// get first grade from user
	printf("%s", "Enter gallon, -1 to end: "); // prompt for input
	scanf("%f", &gallon); // read grade from user
	if (gallon != -1) {
		printf("%s", "Enter miles, -1 to end: "); // prompt for input
		scanf("%f", &miles); // read grade from user
	}
	// loop while sentinel value not yet read from user
	while (gallon != -1) {
		result = miles / gallon;
		printf("result:%6f\n ",result);
		total = total + gallon; // add grade to total
		total2 = total2 + miles;
		counter = counter + 1;
		printf("%s", "Enter gallon, -1 to end: "); // prompt for input
		scanf("%f", &gallon); // read grade from user
		// get next grade from user
		if (gallon != -1) {
			printf("%s", "Enter grade, -1 to end: "); // prompt for input
			scanf("%f", &miles); // read next grade 
		}
		
	} 
	if (counter != 0) {

		
		average = total2 / total; 

		
		printf("Class average is %.6f\n", average);
	}    
	else { 
		puts("No grades were entered");
	} 
} 
