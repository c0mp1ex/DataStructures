#include <stdio.h>

void BubbleSort(int *num, int len) {
		
		int i, j, temp;
		bool flag = 1;
		for (i = len - 1; i > 0; i--) {
		
			for (j = 0; j < i; j++) {
				temp = num[j];
				if (num[j] > num[j+1]) {
					
					num[j] = num[j+1];
					num[j+1] = temp;
					flag = 0;

				}
			}
			if (flag == 1) {
				break;
			}
		}

}

int main() 
{
	int num[] = {12, 34, 12, 12, 34, 56, 33,};
	BubbleSort(num, 7);

	for (int i = 0; i < 7; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}