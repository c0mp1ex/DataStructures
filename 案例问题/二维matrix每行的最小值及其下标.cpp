#include<cstdio>

#define MAXNUM 20

int main()
{
	int row, col;
	printf("输入矩阵的行数和列数，不超过20：");
	scanf("%d%d", &row, &col);
	int matrix[MAXNUM][MAXNUM] = {0};
	int i, j;

	printf("输入矩阵的值：%d * %d", row, col);

	for (i = 0; i < row; i++) {
		
		for (j = 0; j < col; j++) {

			scanf("%d", &matrix[i][j]);
		}
	}

	int min;
	for (i =0; i < row; i++) {

		for (min = matrix[i][0],j = 1; j < col; j++) {

			if (matrix[i][j] < min) {

				min = matrix[i][j];
			}
		}

		printf("第%d行的最小值为%d\n", i+1, min);
	}

	return 0;
}