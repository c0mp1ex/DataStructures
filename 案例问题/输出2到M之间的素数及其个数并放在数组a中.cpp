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
			
			if (i % j == 0) {//可以被整除所以不是素数
				break;
			}
		}
		if (j >= i) {//如果j < i 就是说不是到最后跳出循环的，所以只有j >= i时，才是一直循环到最后，这个数是素数
			
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
