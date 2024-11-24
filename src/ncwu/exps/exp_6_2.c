//
// Created by Levin on 2024/10/23.
//
#include <stdio.h>

void printfRet(char *atl, int rows, int cols);

int main() {
    char article[3][82];
    int rows = sizeof(article) / sizeof(article[0]);
    int cols = sizeof(article[0]) / sizeof(article[0][0]);
    for (int i = 0; i < rows; ++i) {
        fgets(article[i], cols, stdin);
    }
    printfRet((char *) article, rows, cols);
    return 0;
}

void printfRet(char *atl, int rows, int cols) {
    int upW = 0, loW = 0, num = 0, space = 0, other = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols - 1; ++j) {
            char c = *(atl + i * cols + j);
            if (c >= 'A' && c <= 'Z')
                upW++;
            else if (c >= 'a' && c <= 'z')
                loW++;
            else if (c >= '0' && c <= '9')
                num++;
            else if (' ' == c)
                space++;
            else if ('\n' != c)
                other++;
        }
    }
    printf("英文大写字母%d个、小写字母%d个、数字%d个、空格%d个、其它字符%d个\n", upW, loW, num, space, other);
}