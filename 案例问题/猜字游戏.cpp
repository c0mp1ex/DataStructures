#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	system("cls");
	printf("******************������Ϸ******************\n");
	int number;
	int rand_number = rand() % 100;
	printf("��������µ����֣�(1 - 100)");
	while (scanf("%d", &number)) {
		if (number == rand_number) {
			printf("�������,������%d\n", rand_number);
			return 0;
		} else if (number < rand_number) {
			printf("��µ�����С�ˣ�");
		} else if (number > rand_number) {
			printf("��µ����ִ��ˣ�");
		}
	}
	return 0;
}
