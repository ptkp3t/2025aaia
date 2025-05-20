#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // 輸出原始陣列
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    // 完整的冒泡排序
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9 - k; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    // 輸出排序後的結果
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
