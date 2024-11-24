//
// Created by Levin on 2024/10/31.
//
#include <stdio.h>

typedef struct Person {
    char id[10];
    char name[20];
} Person;

Person yell(Person *p, int size);

int main() {
    int n = 0;
    scanf("%d", &n);
    Person person[n];
    for (int i = 0; i < n; ++i) {
        scanf("%s %s", person[i].id, person[i].name);
    }

    Person survival = yell(person, n);

    printf("最后留下%s号%s。\n", survival.id, survival.name);
    return 0;
}

Person yell(Person *p, int size) {
    Person *person = p;
    int guy = size;
    int count = 0;
    for (int i = 0;; ++i) {
        if (size == 1)
            break;
        if (('\0' == (p + (i % guy))->id[0]) && ('\0' == (p + (i % guy))->name[0]))
            continue;
        count++;
        if (count % 3 == 0) {
            (p + (i % guy))->id[0] = '\0';
            (p + (i % guy))->name[0] = '\0';
            size--;
            continue;
        }
        person = (p + (i % guy));
    }
    return *person;
}