#include<stdio.h>

int main()
{
	int array[501];
	for (int h = 1; h < 501; h++) {
	
		array[h] = 0;
	}

	for (int i = 2; i <= 501; i++) {

		for (int j = 2; j < i; j++) {

			if (i % j == 0) {

				break;
			}
		}

		if (j >= i) {

			array[i] = 1;
		
		}
	}

	int k;
	for (k = 1; k < 501; k++) {
	
		if (array[k] == 1) {

		
			printf("%d ", k);
	
		}
	}



	return 0;
}