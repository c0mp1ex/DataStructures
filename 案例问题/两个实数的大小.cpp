#include <cstdio>

int main() 
{
	double number_one, number_two, max;
	printf("请输入两个实数，以回车结束：\n");
	scanf("%lf%lf", &number_one, &number_two);

	if (number_one > number_two) { // max = number_one > number_two ? number_one : number_two
		max = number_one;
	} else {
		max = number_two;
	}
	printf("大的数为%3.2lf\n", max);
	return 0;
}
	