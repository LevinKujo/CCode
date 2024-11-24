//
// Created by Levin on 2024/10/21.
//
//1!+2!+3!+…+20!
#include <stdio.h>

int main() {
    long long int sum = 0, temp = 1;
    for (int i = 1; i <= 20; ++i) {
        temp *= i;
        sum += temp;
    }
    printf("1!+2!+3!+…+20! = %lld", sum);
    return 0;
}