#include <cstdio>

int BinaryFind(int num[], int low, int high, int key);
void InsertionSort(int num[], int len); //插入排序
int main() 
{
	int key, is_key;
	int start = 0, last = 8; 
	int num[] = {12, 34, 45, 11, 23, 56, 33, 24};
	
	InsertionSort(num, 8);
	
	for (int i = 0; i < 8; i++) {
		printf("%d\t", num[i]);
	}
	
	printf("输入要查找的数：");
	scanf("%d", &key);

	is_key = BinaryFind(num, start, last, key);

	if (is_key == -1) {
		printf("没有找到此数!\n");
	} else {
		printf("这个数在第%d位!\n", is_key + 1);
	}

	return 0;
}

int BinaryFind(int num[], int low, int high, int key) { //递归写法

    int mid;
	mid = (low + high) / 2;

	if(num[mid] == key) {
		
		return mid;
	} else if (num[mid] < key) {
		
		BinaryFind(num, mid + 1, high, key);
	} else if (num[mid] > key) {
		
		BinaryFind(num, low, mid + 1, key);
	}
}

void InsertionSort(int num[], int len) {

	int in, out, temp;

	for (in = 1; in < len; in++) {
		temp = num[in];
		for (out = in; out > 0 && temp < num[out - 1]; out--) {
			num[out] = num[out - 1];
		}
		num[out] = temp;
	}
}

