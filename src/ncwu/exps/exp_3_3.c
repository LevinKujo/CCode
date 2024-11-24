//
// Created by Levin on 2024/10/21.
//
/**
* 3、使用switch语句实现下面程序。
输入一个学生的两门课成绩（百分制），
 计算该生的总分并要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。
 总分在180分以上为‘A’，160~179分为‘B’，140~159分为‘C’，120~139分为‘D’，120分以下为‘E’。
具体要求：
①学生的两门课成绩通过键盘输入，成绩应该都为整数，输入之前要有提示信息。
②若输入的成绩不是百分制成绩，则给出错误提示信息，并且不再进行下面的等级评价；若输入的成绩是百分制成绩，则计算总分，并根据要求评价等级。
③按下面形式输出结果：
总分----〉等级
如：   186----〉A
把正确的程序源代码写在下面。
*/
#include <stdio.h>

int main() {
    int cProgram, math, sum;
    char grade;
    printf("请输入C语言和数学成绩（成绩为百分制，用空格隔开）：");
    scanf("%d %d", &cProgram, &math);
    if (cProgram < 0 || cProgram > 100 || math < 0 || math > 100) {
        printf("输入错误！");
        return 1;
    }
    sum = cProgram + math;
    switch (sum / 10) {
        case 20:
        case 19:
        case 18:
            grade = 'A';
            break;
        case 17:
        case 16:
            grade = 'B';
            break;
        case 15:
        case 14:
            grade = 'C';
            break;
        case 13:
        case 12:
            grade = 'D';
            break;
        default:
            grade = 'E';
            break;
    }
    printf("%d----〉%c\n", sum, grade);
    return 0;
}