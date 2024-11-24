//
// Created by Levin on 2024/10/24.
//
#include <stdio.h>

#define N 20

void fun(int *a, int n, int *odd, int *even) {
    *odd = 0;
    *even = 0;
    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 != 0)
            (*odd) += *(a + i);
        else
            (*even) += *(a + i);
    }
}

void main() {
    int a[N] = {1, 9, 2, 3, 11, 6}, i, n = 6, odd, even;
    printf("The original data is:\n");
    for (i = 0; i < n; i++)
        printf("%5d", *(a + i));
    printf("\n\n");

    fun(a, n, &odd, &even);

    printf("The sum of odd numbers:%d\n", odd);
    printf("The sum of even number:%d\n", even);
}
