//
// Created by Levin on 2024/10/24.
//
#include <stdio.h>

double fact(int n);

double factsum(int n);

int main() {
    double num;
    scanf("%lf", &num);
    printf("fact(%.0lf) = %.0lf\n", num, fact(num));
    printf("sum = %.0lf\n", factsum(num));
    return 0;
}

double fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

double factsum(int n) {
    if (n <= 1)
        return 1;
    return fact(n) + factsum(n - 1);
}