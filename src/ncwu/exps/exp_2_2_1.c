//
// Created by Levin on 2024/10/20.
//
/*
 * 1、某企业员工按小时计算工资，每月劳动时间（小时）×每小时工资=总工资，总工资中扣除10%公积金，剩余的为应发工资。
 * 编写一个程序计算并输出某位员工的应发工资。
    具体要求：
    ①该员工的劳动时间和每小时工资数通过键盘输入，且在输入前要有提示信息。
    ②在输出结果时要有文字说明，输出结果的小数点后取2位小数。
    ③工作时间定义为基本整型变量，每小时工资及总工资定义为双精度类型。
 *
 * */
#include <stdio.h>

int main() {
    int hour;
    double money, amount;
    printf("请输入员工的劳动时间：");
    scanf("%d", &hour);
    printf("请输入每小时工资：");
    scanf("%lf", &money);
    amount = money * hour - (money * hour) / 10;
    printf("该员工应发工资：%.2f元", amount);
    return 0;
}