#include <stdio.h>
#include <string.h>
int main(void) {
    char firstName, lastName;
    printf("名字と名前を入力してください\n");
    scanf("%c,%c", firstName, lastName);

    printf("%d %d", firstName, lastName);
    return 0;
}