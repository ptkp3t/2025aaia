#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // ��X��l�}�C
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    // ���㪺�_�w�Ƨ�
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9 - k; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    // ��X�Ƨǫ᪺���G
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
