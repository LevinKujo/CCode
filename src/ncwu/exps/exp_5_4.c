//
// Created by Levin on 2024/10/22.
//
//9   80   205   40
//90  -60   96    1
//210  -3    101   89

//  9    80   205   40
//  90  -60   196    1
//  210  -3    101   89
//  45   54   156   7
#include <stdio.h>

int main() {
    printf("请输入数组的行和列（空格隔开）：");
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    int row_index, col_index, target;
    int flag = 0;
    for (int i = 0; i < rows; ++i) {
        flag = 1;
        target = arr[i][0];
        for (int j = 0; j < cols; ++j) {
            if (target < arr[i][j]) {
                target = arr[i][j];
                row_index = i;
                col_index = j;
            }
        }
        for (int j = 0; j < rows; ++j) {
            if (target > arr[j][col_index]) {
                flag = 0;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag)
        printf("鞍点为：%d，在第一行第一列\n", target, row_index + 1, col_index + 1);
    else
        printf("没有鞍点\n");
    return 0;
}