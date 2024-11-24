//
// Created by Levin on 2024/10/31.
//
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100
#define MAX_NUM 50

void get_max_len(char(*p)[MAX_STR_LEN], int size, char **max);

int main() {
    char strings[MAX_NUM][MAX_STR_LEN];
    int size = 0;
    char *max = NULL;
    while (size < MAX_NUM) {
        scanf("%s", strings[size]);
        if (!strcmp("****", strings[size]))
            break;
        size++;
    }
    get_max_len(strings, size, &max);
    printf("The max len string is \"%s\".\n", max);
    return 0;
}

void get_max_len(char(*p)[MAX_STR_LEN], int size, char **max) {
    int max_len = 0;
    *max = *p;
    for (int i = 1; i < size; ++i) {
        int temp = strlen(*(p + i));
        if (max_len < temp) {
            max_len = temp;
            *max = *(p + i);
        }
    }
}