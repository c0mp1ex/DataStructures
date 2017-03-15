#include<stdio.h>

#define OFFSET  500000 //ƫ���� ���ڲ��������±�������֮���ƫ��
int hash[1000001]; // ��¼ÿ�������Ƿ���֣�������Ϊ1

int main()
{

	int n, m;

	while (scanf("%d%d", &n, &m) != EOF) {

		int i;
		for (i = -500000; i <= 500000; i++) {
			hash[i + OFFSET] = 0;
		}// ��ʼ������Ϊ0

		for (i = 0; i < n; i++) {

			int x; 
			scanf("%d", &x);
			hash[x + OFFSET] = 1;//���ǳ��ֵ�������Ϊ1
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