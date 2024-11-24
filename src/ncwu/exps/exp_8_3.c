//
// Created by Levin on 2024/11/1.
//
#include <stdio.h>

#define ROW 5
#define COL 5

void func(int(*p)[COL]);

int main() {
    int arr[ROW][COL];
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            scanf("%d", &arr[i][j]);
    func(arr);
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}

void func(int(*p)[COL]) {
    int arr[ROW * COL];
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            arr[i * COL + j] = *(*(p + i) + j);
    for (int i = 0; i < ROW * COL - 1; ++i) {
        for (int j = 0; j < ROW * COL - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    *(*(p + 2) + 2) = arr[ROW * COL - 1];
    **p = arr[0];
    *(*p + 4) = arr[1];
    **(p + 4) = arr[2];
    *(*(p + 4) + 4) = arr[3];
}