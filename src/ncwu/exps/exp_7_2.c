//
// Created by Levin on 2024/10/27.
//
#include <stdio.h>
#include <stdlib.h>

void initStu(int stu[], int peo);

void printAns(int stu[], int peo, int *pStu);

int main() {
    int peo = 0;
    printf("请输入班级人数：");
    scanf("%d", &peo);
    int stu[peo];
    initStu(stu, peo);
    int *pStu = NULL;
    printAns(stu, peo, pStu);
    return 0;
}

/**
 * 打印成绩最高分和对应学号
 * @param stu
 * @param peo
 * @param pStu
 */
void printAns(int stu[], int peo, int *pStu) {
    pStu = malloc(sizeof(stu));
    pStu = stu;
    int max = -1;
    int max_Index = -1;
    for (int i = 0; i < peo; ++i) {
        if (max < *(pStu + i)) {
            max = *(pStu + i);
            max_Index = i;
        }
    }
    printf("该班级成绩的最高分为：%d，该学生学号为：%d。\n", max, max_Index + 1);
}

/**
 * 初始化班级学生成绩
 * @param stu
 * @param peo
 */
void initStu(int stu[], int peo) {
    if (NULL != stu) {
        for (int i = 0; i < peo; ++i) {
            *(stu + i) = rand() % 101;
        }
    }
}
