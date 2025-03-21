#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};

    // 輸出原始陣列
    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 更新 a[0]
    a[0] = a[0] - 99;

    // 輸出修改後的陣列
    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
