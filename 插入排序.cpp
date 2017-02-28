/*** 1、从第一个元素开始，该元素可以认为已经被排序
 *** 2、取出下一个元素，在已经排序的元素序列中从后向前扫描
 *** 3、如果该元素大于新元素，该元素移动到下一个位置
 *** 4、重复步骤3，知道找到以排序的元素小于或者等于新元素
 *** 5、将新元素插入到该位置后
 *** 6、重复步骤2-5


***/
#include<cstdio>

void insert_sort(int *num, int len);

int main()
{
    int num[5] = {12, 34, 23, 22, 12,};
    insert_sort(num, 5);
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}

void insert_sort(int *num, int len)
{
    int in, out, temp;
    for (in = 1; in < len; in++) {
        temp = num[in];
        for (out = in; out > 0; out--) {
                if(temp < num[out-1]) {
                    num[out] = num[out-1];
                }
        }
        num[out] = temp;
    }

}
