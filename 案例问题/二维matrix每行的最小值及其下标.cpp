#include<cstdio>

#define MAXNUM 20

int main()
{
	int row, col;
	printf("��������������������������20��");
	scanf("%d%d", &row, &col);
	int matrix[MAXNUM][MAXNUM] = {0};
	int i, j;

	printf("��������ֵ��%d * %d", row, col);

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

		printf("��%d�е���СֵΪ%d\n", i+1, min);
	}

	return 0;
}