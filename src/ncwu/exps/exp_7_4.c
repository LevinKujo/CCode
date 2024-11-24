//
// Created by Levin on 2024/10/27.
//
#include <stdio.h>

#define rows 3
#define cols 5

void reversal(int *pArray);

int main() {
    int array[rows][cols] = {0};
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &array[i][j]);
        }
    }

    reversal(array);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void reversal(int *pArray) {
    int begin = 0;
    int end = rows * cols - 1;
    while (begin <= end) {
        int beginData = *(pArray + begin);
        int endData = *(pArray + end);
        *(pArray + begin++) = endData;
        *(pArray + end--) = beginData;
    }
}