#include<cstdio>

#define MAX  1000

int main()
{
	int a[MAX] = {0};
	int m, count = 0;
	scanf("%d", &m);
	
	int i, j;
	for (i = 2; i <= m; i++) {
		
		for (j = 2; j < i; j++) {
			
			if (i % j == 0) {//���Ա��������Բ�������
				break;
			}
		}
		if (j >= i) {//���j < i ����˵���ǵ��������ѭ���ģ�����ֻ��j >= iʱ������һֱѭ������������������
			
			a[count] = i;
			count++;
			printf("%4d", i);
			
		}
		
	}
	for (int r = 0; r < count; r++) {

//		printf("a[%d] = %d\n", r, a[r]);

	}
	printf("       %4d\n", count);

	return 0;
}
