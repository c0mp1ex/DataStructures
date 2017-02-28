#include <stdio.h>

void BubbleSort(int *num, int len);

int main()
{
	int num[] = {12, 13, 45, 56, 34, 34, 12,};
	BubbleSort(num, 7);
	for (int i = 0; i < 7; i++) {
	
		printf("%d\n", num[i]);
	}
	return 0;
}

void BubbleSort(int *num, int len) {
	int p;
	for (p = len-1; p >= 0; p--) {

		int temp;
		for (int i = 0; i < p; i++) {
			temp = num[i];
			if (num[i] > num[i+1]) {
				num[i] = num[i+1];
				num[i+1] = temp;
			}
		}
	}
}