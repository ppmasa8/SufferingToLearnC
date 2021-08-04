#include <stdio.h>

void judgeMaxMin(int array[], int max, int min);

int main(void) {
    int i,array[10],max,min;
    i = 0;
    do {
        printf("%d番目の数:", i+1);
        scanf("%d", &array[i]);
        i++;
    } while (array[i-1] != -1);

    judgeMaxMin(array, &max, &min);
    printf("最大値 %d : 最小値 %d\n",max,min);
	
	return 0;
}

void judgeMaxMin(int array[], int max, int min) {
    int i = 0;
    *min = 0;
    *max = 100;

    while (array[i] != -1) {
        if (array[i] > max)max = array[i];
        if (array[i] > min)min = array[i]; 
        i++;
    }
}