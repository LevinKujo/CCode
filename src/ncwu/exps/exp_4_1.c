//
// Created by Levin on 2024/10/21.
//
/*
 * 1．相传国际象棋是古印度舍罕王的宰相达依尔发明的。舍罕王十分喜欢象棋，决定让宰相自己选择何种赏赐。
 * 这位聪明的宰相指着8×8共64格的象棋盘说：
 * 陛下，请您赏给我一些麦子吧，就在棋盘的第一个格子中放1粒，第2格中放2粒，第3格放4粒，以后每一格都比前一格增加一倍，
 * 依此放完棋盘上的64个格子，我就感恩不尽了。舍罕王让人扛来一袋麦子，他要兑现他的许诺。
 * 国王能兑现他的许诺吗？
程序1：试编程计算舍罕王共要多少粒麦子赏赐他的宰相，这些麦子合多少立方米？（已知1立方米麦子约1.42e8粒） 总粒数为：sum=1+2+22+23+…+263
 */
#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int sum = 0;
    int i = 1;
    while (i < 64) {
        sum += (long long) pow(2, i);
        i++;
    }
    printf("共%llu粒麦子\n", sum);
    printf("合%.2f立方米\n", sum / 1.42e8);
    return 0;
}