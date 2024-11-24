//
// Created by Levin on 2024/10/20.
//
/*
 * 2、编写一个程序用于水果店售货员结账：已知苹果2.50元/斤，鸭梨1.80元/斤，香蕉2.00元/斤，桔子1.60元/斤。
具体要求：
①输入各类水果的重量（输入前要有提示信息），计算并输出应付钱数，且输出结果要有文字说明。
②再输入顾客实际付款数，计算并输出应找钱数，且输出结果要有文字说明。
 * */
#include <stdio.h>

int main() {
    double apple, pear, banana, orange, money, actual;
    printf("请输入苹果的重量：");
    scanf("%lf", &apple);
    printf("请输入鸭梨的重量：");
    scanf("%lf", &pear);
    printf("请输入香蕉的重量：");
    scanf("%lf", &banana);
    printf("请输入桔子的重量：");
    scanf("%lf", &orange);
    money = apple * 2.5 + pear * 1.8 + banana * 2.0 + orange * 1.6;
    printf("顾客应付款：%.2f元\n", money);
    printf("顾客实际付款：");
    while (1) {
        scanf("%lf", &actual);
        if (actual < 0) {
            printf("金额不能是负数！\n请付款：");
        } else if (actual < money) {
            printf("钱不够！\n请付款：");
        } else {
            printf("付款成功，应找回顾客%.2f元\n", actual - money);
            break;
        }
    }
    return 0;
}