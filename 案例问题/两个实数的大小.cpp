#include <cstdio>

int main() 
{
	double number_one, number_two, max;
	printf("����������ʵ�����Իس�������\n");
	scanf("%lf%lf", &number_one, &number_two);

	if (number_one > number_two) { // max = number_one > number_two ? number_one : number_two
		max = number_one;
	} else {
		max = number_two;
	}
	printf("�����Ϊ%3.2lf\n", max);
	return 0;
}
	