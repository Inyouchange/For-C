#include<stdio.h>

int main(void){
	int start = 1;
	int number;

	printf("%s", "Enter the number: ");
	scanf("%d", &number);
	while(number < 0){
		printf("Please enter the correct number\n");
		printf("%s", "Enter the number: ");
		scanf("%d", &number);
	}
	while (number > 0){
		start = number * start;
		number--;
	}
	printf("The result is %u\n", start);

	

	
	
	
}


