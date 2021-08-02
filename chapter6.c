#include<stdio.h>

void main(void) {
    int cost;
    printf("定価を入力してください\n");
    scanf("%d", &cost);
    printf("1割引の価格→%d\n", cost * 0.9);
    printf("3割引の価格→%d\n", cost * 0.7);
    printf("5割引の価格→%d\n", cost * 0.5);
    printf("8割引の価格→%d\n", cost * 0.2);
}