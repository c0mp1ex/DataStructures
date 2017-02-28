#include <stdio.h>

void BubbleSort(int *num, int len) {
		
		int i, j, temp;
		bool flag = 1;
		for (i = len - 1; i > 0; i--) { //一共可以走多少轮
		
			for (j = 0; j < i; j++) {//第一轮排序
				temp = num[j];
				if (num[j] > num[j+1]) {//如果前一个数比后一数大，则交换位置
					
					num[j] = num[j+1];
					num[j+1] = temp;
					flag = 0;

				}
			}
			if (flag == 1) {//若数已经按循序排列（就是不在进行交换了），则不用在进入循环进行比较了 
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
