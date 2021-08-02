#include <stdio.h>

int main(void) {
    int month;
    printf("月を半角で入力してください。：例 1\n");
    scanf("%d", &month);
    if (month == 1) {
        printf("睦月");
    } else if (month == 2) {
        printf("如月");
    } else if (month == 3) {
        printf("弥生");
    } else if (month == 4) {
        printf("卯月");
    } else if (month == 5) {
        printf("皐月");
    } else if (month == 6) {
        printf("水無月");
    } else if (month == 7) {
        printf("文月");
    } else if (month == 8) {
        printf("葉月");
    } else if (month == 9) {
        printf("長月");
    } else if (month == 10) {
        printf("神無月");
    } else if (month == 11) {
        printf("霜月");
    } else if (month == 12) {
        printf("師走");
    } else {
        printf("入力された数字は月には存在しません。");
    }
}