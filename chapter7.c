#include <stdio.h>

int main(void) {
    int century, res;
    printf("西暦を入力すると、その年にオリンピックが開催されるかどうか判定します。(夏季、冬季の区別も表示します)\n");
    scanf("%d", &century);

    res = century % 4;

    if (res == 0) {
        printf("%dは夏季オリンピックです。\n", century);
    } else if (res == 2) {
        printf("%dは冬季オリンピックです。\n", century);
    } else {
        printf("オリンピックは開催していません\n");
    }
    return 0;
}