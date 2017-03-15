#include<stdio.h>

int main()
{

	int n;

	printf("输入学生的个数：\n");
	while (scanf("%d", &n) != EOF && n != 0) {//若n等于0则结束

		int hash[101] = {0}; //定义一个hash数组来记录各种分数出现的情况

		printf("分别输入他们的分数：\n");
		for (int i = 1; i <= n; i++) {
			
			int x;
			scanf("%d", &x);
			hash[x] ++;//统计分数出现次数
		}

		int j;
		printf("输入要查询的分数：\n");
		scanf("%d", &j);

		printf("%d\n", hash[j]);


	}
	return 0;
}