#include <stdio.h>

int olympic(int year);

enum {
    OLYMPIC_NON,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER,
};

int main(void) {
    int year, hold;

    scanf("%d", &year);
    hold = olympic(year);

    switch (hold) {
		case OLYMIPC_NON:
		printf("開かれない\n");
		break;
		case OLYMIPC_SUMMER:
		printf("夏季五輪\n");
		break;
		case OLYMIPC_WINTER:
		printf("冬季五輪\n");
		break;
	};
	return 0;
}

int olympic(int year) {
	if (year % 2 == 0) {
		if (year % 4 == 0) {
			return OLYMIPC_SUMMER;
		} else {
			return OLYMIPC_WINTER;
		}
	} else {
		return OLYMIPC_NON;
	}
	
}
