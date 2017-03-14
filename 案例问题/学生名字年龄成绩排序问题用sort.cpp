#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct Stu {

	char name[101];
	int age;
	int score;

} stu[1000];


bool cmp(Stu x, Stu y) {//实现比较规则
	if (x.score != y.score) {
		return x.score < y.score;//若分数不同则按分数低的在前排列 
	}
	int tmp = strcmp(x.name, y.name);

	if (tmp != 0) {//若名字相同则按名字字典数在前排序
		return tmp < 0;
	} else {

		return x.age < y.age;//若分数和名字都相同则按照年龄小排序
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
