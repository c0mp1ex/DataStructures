/***
问题描述
一辆汽车加满油后可行驶 n公里。 旅途中有若干加油站。 设计一个有效算法,指出应在哪些加油站停靠加油,使沿途加油次数最少。请对于给定的 n和 k个加油站位置， 计算最少加油次数。
数据输入
对于输入数据，其第1行有2个正整数n（1≤n≤5000）和 k（1≤k≤5000）。表示汽车加满油后可行驶 n公里，且旅途中有 k个加油站。接下来的1行中，有 k+1个整数，表示第 k个加油站与第 k-1个加油站之间的距离。第 0个加油站表示出发地，汽车已加满油。第 k+1个加油站表示目的地。
结果输出
数据输出一行。 如果所对应的输入数据数据可以到达， 将计算的最少加油次数输出。 如果无法到达目的地，则输出“NoSolution”。
输入示例
7  7
1  2  3  4  5  1  6  6
输出示例
***/
#include <cstdio>

int main ()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int ans = 0;//保存加油的次数
    int length = 0;// 加油站之间的距离
    int cur = n;//当前的油量
    bool ok = true;
    for (int i = 0; i <= k; i++) {
	scanf("%d", &length);
	if (cur < length) {
 	    ok = false;
	}
	if (length <= cur) {
	    cur = cur - length;
	}
	else {
	    cur = n;
	    ans++;
	    cur -= length;
	}
    
    }
    if (ok == true) {
        printf("加油的次数为%d", ans);
    }else {
        printf("Nosolution");
    }
    return 0;

}
