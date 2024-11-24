//
// Created by Levin on 2024/10/20.
//
#include <stdio.h>

int main() {
    double r, s, v;
    double pi = 3.14;
    printf("input r:\n");
    scanf("%lf", &r);
    s = 4 * pi * r * r;                            /*计算球体的表面积*/
    v = 4.0 * pi * r * r * r / 3.0;                      /*计算球体的体积*/
    printf("r=%.6f\n", r);
    printf("s=%.8f，v=%.8f\n", s, v);
}