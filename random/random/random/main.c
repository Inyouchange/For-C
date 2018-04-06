#include <stdio.h>
#include <stdlib.h>
int flip(){
	int face = 1 + rand() % 2;
	return face;
}
int main(void)
{
	unsigned int frequency1 = 0; // rolled 1 counter
	unsigned int frequency2 = 0; // rolled 2 counter
	srand(time(NULL));
	// loop 60000000 times and summarize results
	for (unsigned int roll = 1; roll <= 100; ++roll) {
		;
		// determine face value and increment appropriate counter
		switch (flip()) {

		case 1: // rolled 1
			++frequency1;
			break;

		case 2: // rolled 2
			++frequency2;
			break;


		}
	}

	// display results in tabular format
	printf("%s%13s\n", "Face", "Frequency");
	printf("   tail%13u\n", frequency1);
	printf("   head%13u\n", frequency2);

}


