#include<stdio.h>

#define OFFSET  500000 //偏移量 用于补偿数组下标与数字之间的偏移
int hash[1000001]; // 记录每个数字是否出现，出现设为1

int main()
{

	int n, m;

	while (scanf("%d%d", &n, &m) != EOF) {

		int i;
		for (i = -500000; i <= 500000; i++) {
			hash[i + OFFSET] = 0;
		}// 初始化都设为0

		for (i = 0; i < n; i++) {

			int x; 
			scanf("%d", &x);
			hash[x + OFFSET] = 1;//凡是出现的数字设为1
		}

		for (i = 500000; i >= -500000; i--) {
			if (hash[i + OFFSET] == 1) {
			
				printf("%d ", i);
				m--;

				if (m == 0) {
					break;
				}
			}
		}

	}
	return 0;
}