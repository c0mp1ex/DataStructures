#include <cstdio>

int main() 
{
	int n = 0, temp, sum = 0;
	printf("请输入数列的项数N的值：");
	scanf("%d", &n);

	if (n < 1) {
		printf("你输入的数小于1！\n");
		return -1;
	}

	for (int i = 1; i <= n; i++) {

		temp = 0;
		for (int j = 1; j <= i; j++) {
			temp = temp + j;
		}
		sum = sum + temp;
	}
	printf("数列的和为%d\n", sum);
	return 0;
}
