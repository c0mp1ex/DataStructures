#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{

	int n, array[10000];

	while (scanf("%d", &n) != EOF) {

		int i;
		for (i = 0; i < n; i++) {
			scanf("%d", &array[i]);
		}

		sort(array, array + n);

		for (i = 0; i < n; i++) {
			printf("%d ", array[i]);
		}
	}
	return 0;
}
