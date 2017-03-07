#include <cstdio>

const int len = 3;
const int len2 = 4;

void MatrixTrans(int matrixA[len][len2], int matrixB[len2][len], int len, int len2);

int main(void) 
{
	int i, j;
	int matrixA[len][len2], matrixB[len2][len];
	for (i = 0; i < len; i++) {
		for (j = 0; j < len2; j++) {
			scanf("%d", &matrixA[i][j]);
		}
	}
	for (i = 0; i < len; i++) {

		for (j = 0; j < len2; j++) {

			printf("%8d", matrixA[i][j]);
		}
		printf("\n");
	}


	MatrixTrans(matrixA, matrixB, 3, 4);
	printf("matrixB\n");

	for (i = 0; i < len2; i++) {

		for (j = 0; j < len; j++) {

			printf("%8d", matrixB[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void MatrixTrans(int matrixA[len][len2], int matrixB[len2][len], int len, int len2) {

		int i, j;
		for (i = 0; i < len; i++) {

		for (j = 0; j < len2; j++) {

			matrixB[j][i] = matrixA[i][j];
		}
	}

}
