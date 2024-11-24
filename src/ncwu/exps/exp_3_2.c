//
// Created by Levin on 2024/10/21.
//
/**
    设faHeight为其父身高，moHeight为其母身高，身高预测公式为：
        男性成人时身高 = (faHeight + moHeight) * 0.54(cm)
        女性成人时身高 = (faHeight * 0.923 + moHeight) / 2(cm)
            此外，如果喜爱体育锻炼，那么可增加身高2%，如果有良好的卫生饮食习惯，那么可增加身高1.5%。
    编程从键盘输入小孩的性别（用字符型变量sex存储，输入字符F表示女性，输入字符M表示男性）、
 父母身高（用实型变量存储，faHeight为其父身高，moHeight为其母身高）、
 是否喜爱体育锻炼（用字符型变量sports存储，输入字符Y表示喜爱，输入字符N表示不喜爱）、
 是否有良好的饮食习惯等条件（用字符型变量diet存储，输入字符Y表示喜爱，输入字符N表示不喜爱），
 利用给定公式和身高预测方法对小孩的身高进行预测。
*/
#include <stdio.h>

int main() {
    char sex, sports, diet;
    float faHeight, moHeight, baby;
    printf("请输入小孩的性别（F表示女性，M表示男性）：\n");
    scanf(" %c", &sex);
    printf("请输入父亲身高：\n");
    scanf("%f", &faHeight);
    printf("请输入母亲身高：\n");
    scanf("%f", &moHeight);
    printf("是否喜爱体育锻炼（Y表示喜爱，N表示不喜爱）：\n");
    scanf(" %c", &sports);
    printf("是否有良好的饮食习惯等条件（Y表示喜爱，N表示不喜爱）：\n");
    scanf(" %c", &diet);
    if ('F' == sex || 'f' == sex)
        baby = (faHeight * 0.923 + moHeight) / 2;
    else if ('M' == sex || 'm' == sex)
        baby = (faHeight + moHeight) * 0.54;
    else
        return 1;
    if ('Y' == sports || 'y' == sports)
        baby = baby + baby * 0.02;
    if ('Y' == diet || 'y' == diet)
        baby = baby + baby * 0.015;
    printf("该小孩成年后身高预测为：%.2f(cm)\n", baby);
    return 0;
}