#include<stdio.h>

void BinarySort(int arry[], int len) {

    int temp, low, high, mid;

    for (int i = 1; i < len; i++) {
        temp = arry[i];
        low = 0;
        high = i - 1;

        while (low <= high) {// 不断的折半查找

            mid = (low + high) / 2;

            if (temp < arry[mid]) {

                high = mid - 1;

            } else {

                low = mid + 1;

            }
        }
        for (int j = i; j > low; j--)  //插入位置正好是low

        arry[low] = temp;
    }

}


int main(void)
{
    int arry[5] = {5, 4, 3, 2, 1,};
    BinarySort(arry, 5);

    for (int i = 0; i < 5; i++) {

        printf("%d\n", arry[i]);
    }
    return 0;
}

