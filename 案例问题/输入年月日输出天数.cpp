#include<stdio.h>

bool IsRYear(int year) {

	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0; 
}

int main()
{
	int Month[13] = {0, 31, 28 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int year, month, day;
	while (scanf("%d/%d/%d", &year, &month, &day) != EOF) {

		int ans = 0;
		for (int i = 1; i < month; i++) {
			ans = ans + Month[i];
		}

		ans += day;

		if (IsRYear(year) && month > 2) {
			ans++;
		}

		printf("%d", ans);
	}
	return 0;
}