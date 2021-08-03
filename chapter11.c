#include <stdio.h>

char olympic(int);

int main(void) {
    int year;

    printf("西暦を入力してください\n");
    scanf("%d", &year);

    printf("%s", olympic(year));
    return 0;
}

char olympic(int year) {
    if (year % 2 == 0) {
        return 'true';
    } else {
        return 'false';
    }
}