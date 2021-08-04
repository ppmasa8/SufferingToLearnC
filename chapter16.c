#include <stdio.h>
#include <string.h>

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

void InputPeople(People *data);
void ShowPeople(People data);

int main(void) {
    People data[3];
    int i;

    for (i=0;i<3;i++) {
        InputPeople(&data[i]);
    }

    for (i=0;i<3;i++) {
        ShowPeople(data[i]);
    }
    return 0;
}

void InputPeople(People *data) {
    printf("Name:");
    scanf("%s", data -> name);
    printf("Age:");
    scanf("%d", &data -> age);
    printf("Sex(1-Man,2-Women):");
    scanf("%d", &data -> sex);
    printf("\n");
}

void ShowPeople(People data) {
    char sex[16];

    printf("Name:%s\n", data.name);
    printf("Age:%d\n", data.age);

    if (data.sex == 1) {
        strcpy(sex,"Man");
    } else {
        strcpy(sex,"Women");
    }

    printf("Sex:%s\n",sex);
    printf("\n");
}