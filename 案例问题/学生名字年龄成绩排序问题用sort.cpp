#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct Stu {

	char name[101];
	int age;
	int score;

} stu[1000];


bool cmp(Stu x, Stu y) {//ʵ�ֱȽϹ���
	if (x.score != y.score) {
		return x.score < y.score;//��������ͬ�򰴷����͵���ǰ���� 
	}
	int tmp = strcmp(x.name, y.name);

	if (tmp != 0) {//��������ͬ�������ֵ�����ǰ����
		return tmp < 0;
	} else {

		return x.age < y.age;//�����������ֶ���ͬ��������С����
	}

}

int main()
{
	int n; 
	while (scanf("%d", &n) != EOF) {

		int i;
		for (i = 0; i < n; i++) {

			scanf("%s%d%d", stu[i].name, &stu[i].age, &stu[i].score);
		}

		sort(stu, stu + n, cmp);

		for (i = 0; i < n; i++) {
			printf("%s %d %d ", stu[i].name, stu[i].age, stu[i].score);
		}
	}

	return 0;
}
