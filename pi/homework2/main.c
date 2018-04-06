#include <stdio.h>

int main(void)
{
	double number;
	double ans = 0;
	int counter = 0;
	double d;

	for (number = 1, counter = 1; ans !=3.14 ; number += 2, counter++){
		d = ans - 3.14;
		if (d < 0 || d>0.000001){
			if (counter % 2 == 1)
				ans += (4 / number);
			else if (counter % 2 == 0)
				ans -= (4 / number);
			printf("%d   %f\n", counter, ans);
		}
		else
			break;
	}
	printf("Execue %d can get 3.14\n", --counter);
	counter++;
	system("pause");

	for (; ans != 3.141; number += 2, counter++){
		d = ans - 3.141;
		if (d < 0 || d>0.000001){
			if (counter % 2 == 1)
				ans += (4 / number);
			else if (counter % 2 == 0)
				ans -= (4 / number);
			printf("%d   %f\n", counter, ans);
		}
		else
			break;
	}
	printf("Execue %d can get 3.141\n", --counter);
	counter++;
	system("pause");

	for (; ans != 3.1415; number += 2, counter++){
		d = ans - 3.1415;
		if (d < 0 || d>0.000001){
			if (counter % 2 == 1)
				ans += (4 / number);
			else if (counter % 2 == 0)
				ans -= (4 / number);
			printf("%d   %f\n", counter, ans);
		}
		else
			break;
	}
	printf("Execue %d can get 3.1415\n", --counter);
	counter++;
	system("pause");

	for (; ans != 3.14159; number += 2, counter++){
		d = ans - 3.14159;
		if (d < 0 || d>0.000001){
			if (counter % 2 == 1)
				ans += (4 / number);
			else if (counter % 2 == 0)
				ans -= (4 / number);
			printf("%d   %f\n", counter, ans);
		}
		else
			break;
	}
	printf("Execue %d can get 3.14159\n", --counter);
	counter++;
	system("pause");
}