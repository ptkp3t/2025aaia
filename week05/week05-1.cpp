#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};

    // ��X��l�}�C
    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // ��s a[0]
    a[0] = a[0] - 99;

    // ��X�ק�᪺�}�C
    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
