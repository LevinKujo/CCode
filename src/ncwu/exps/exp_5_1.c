//
// Created by Levin on 2024/10/22.
//
// 猴子吃桃问题。
// 猴子第1天摘了若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
// 第2天早上又将剩下的桃子吃掉一半，又多吃了一个。
// 以后每天早上都吃了前一天剩下的一半零一个。
// 到第10天早上想吃时，只剩下一个桃子了。
// 求第一天共摘了多少个桃子？
// day      eat             剩余
//  1    (n / 2) + 1    n = n - ((n / 2) + 1)
//  2    (n / 2) + 1    n = n - ((n / 2) + 1)
#include <stdio.h>

int main() {
    int peach = 1;
    int day = 10;

    for (int i = day - 1; i >= 1; --i) {
        peach = (peach + 1) * 2;
    }

    printf("猴子第一天摘了%d个桃子。\n", peach);
    return 0;
}

/*// 穷举法 垃圾
int peach = 0;
while (1)
{
    peach++;
    int temp = peach;
    for (int day = 1; day < 10; ++day)
    {
        temp -= temp / 2 + 1;
        if (temp <= 0)
            break;
    }
    if (temp == 1)
    {
        printf("猴子第一天摘了：%d个桃子\n", peach);
        break;
    }
}
return 0;*/
