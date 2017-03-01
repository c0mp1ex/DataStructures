#include <cstdio>

int SequentialFind(int num[], int len, int key);

int main() 
{
	int key, is_key = -1;
	int num[] = {12, 23, 34, 45, 123, 11, 33, 55};
	printf("输入要查找的数：");
	scanf("%d", &key);
	is_key = SequentialFind(num, 8, key);
	if (-1 == is_key) {
		printf("not find key!");
	} else {
		printf("在第%d位\n", is_key + 1);
	}

	return 0;
}

int SequentialFind(int num[], int len, int key) {

	int ans = -1;
	for (int i = 0; i < len; i++) {
		if (num[i] == key) {
			ans = i;
		}
	}
	return ans;
}