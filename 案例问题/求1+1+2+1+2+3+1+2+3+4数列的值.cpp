#include <cstdio>

int main() 
{
	int n = 0, temp, sum = 0;
	printf("���������е�����N��ֵ��");
	scanf("%d", &n);

	if (n < 1) {
		printf("���������С��1��\n");
		return -1;
	}

	for (int i = 1; i <= n; i++) {

		temp = 0;
		for (int j = 1; j <= i; j++) {
			temp = temp + j;
		}
		sum = sum + temp;
	}
	printf("���еĺ�Ϊ%d\n", sum);
	return 0;
}
