//
// Created by Levin on 2024/10/31.
//
#include <stdio.h>

void print_arr(int *arr, int len);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(int);
    print_arr(arr, len);
    return 0;
}

void print_arr(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", *(arr + i));
    }
}