//
// Created by Levin on 2024/10/21.
//
//（1）输入一行字符，分别统计出其中的英文字母、空格、数字和其它字符的个数。
//（2）在得到正确结果后，请修改程序使之能分别统计大小写字母、空格、数字和其它字符的个数。
#include <stdio.h>

int main() {
    int upWord = 0, lowWord = 0, space = 0, num = 0, other = 0;
    char str[100];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while ('\0' != str[i]) {
        if (str[i] >= 65 && str[i] <= 90)
            upWord++;
        else if (str[i] >= 97 && str[i] <= 122)
            lowWord++;
        else if (str[i] == 32)
            space++;
        else if (str[i] >= 48 && str[i] <= 57)
            num++;
        else if (str[i] != '\n')
            other++;
        i++;
    }
    printf("英文字母：\n 大写：%d\n 小写：%d\n空格：%d\n数字：%d\n其它字符：%d\n", upWord, lowWord, space, num, other);
    return 0;
}