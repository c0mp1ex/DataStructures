#include<stdio.h>
#include<algorithm>

bool cmp(int x, int y) {

	return x > y;
}

int main()
{
	int n, array[200];

	while (scanf("%d", &n) != EOF) {

		int i;
		for (i = 0; i < n; i++) {
			scanf("%d", &array[i]);
		}
			
		std::sort(array, array + n, cmp);

		for (i = 0; i < n; i++) {

			printf("%d ", array[i]);
		}	

	}


	return 0;
}