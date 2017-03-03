#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	system("cls");
	printf("******************猜字游戏******************\n");
	int number;
	int rand_number = rand() % 100;
	printf("请输入你猜的数字！(1 - 100)");
	while (scanf("%d", &number)) {
		if (number == rand_number) {
			printf("你猜中了,数字是%d\n", rand_number);
			return 0;
		} else if (number < rand_number) {
			printf("你猜的数字小了！");
		} else if (number > rand_number) {
			printf("你猜的数字大了！");
		}
	}
	return 0;
}
