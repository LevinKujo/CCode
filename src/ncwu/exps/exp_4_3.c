//
// Created by Levin on 2024/10/21.
//
/*
 * 3.打印九九乘法表
程序3：编程输出如下上三角形式的九九乘法表。
1	  2    3    4    5    6    7    8    9
-	  -    -    -    -    -    -    -    -
1    2    3    4    5    6    7    8    9
     4    6    8    10   12   14   16   18
          9    12   15   18   21   24   27
               16   20   24   28   32   36
                    25   30   35   40   45
                         36   42   48   54
                              49   56   63
                                   64   72
                                        81
 */
#include <stdio.h>

int main() {
    for (int row = 1; row <= 9; ++row) {
        for (int space = 1; space < row; ++space)
            printf("\t");
        for (int col = row; col <= 9; ++col)
            printf("%d\t", row * col);
        printf("\n");
    }
    return 0;
}