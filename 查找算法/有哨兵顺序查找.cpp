#include <cstdio>

int SequentialFind(int num[], int len, int key);

int main() 
{
	int key, is_key = 0;
	int num[] = {0, 12, 23, 34, 45, 123, 11, 33, 55};
	printf("����Ҫ���ҵ�����");
	scanf("%d", &key);
	is_key = SequentialFind(num, 9, key);
	if (0 == is_key) {
		printf("not find key!");
	} else {
		printf("�ڵ�%dλ\n", is_key + 1);
	}

	return 0;
}

int SequentialFind(int num[], int len, int key) {

	int i = len;
	num[0] = key; // ��Ϊ�ڱ�
	while (num[i] != key) {
		i--;
	}
	return i;
}