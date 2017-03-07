#include <cstdio>

void fun(int *s, int t, int *result);

int main(void) 
{

	int result;
	int store[15] = {148, 135, 156, 356, 985, 125, 165, 178, 189, 190, 567, 136, 567, 678, 133};
	fun(store, 15, &result);

	printf("%d\t%d\n", result, store[result]);

	return 0;
}

void fun(int *s, int t, int *result) {
	int min = s[0];
	for (int i = 0; i < t; i++) {
		if (s[i] <= min) {
			*result = i;
			min = s[i];
		}
	}

}