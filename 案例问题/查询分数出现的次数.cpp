#include<stdio.h>

int main()
{

	int n;

	printf("����ѧ���ĸ�����\n");
	while (scanf("%d", &n) != EOF && n != 0) {//��n����0�����

		int hash[101] = {0}; //����һ��hash��������¼���ַ������ֵ����

		printf("�ֱ��������ǵķ�����\n");
		for (int i = 1; i <= n; i++) {
			
			int x;
			scanf("%d", &x);
			hash[x] ++;//ͳ�Ʒ������ִ���
		}

		int j;
		printf("����Ҫ��ѯ�ķ�����\n");
		scanf("%d", &j);

		printf("%d\n", hash[j]);


	}
	return 0;
}