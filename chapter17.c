#include <stdio.h>

int main(void) {
    FILE *fp;
    fp = fopen("test.csv", "w");
    fprintf(fp, "番号、名前、テストの平均点\n");
    fprintf(fp, "1,しんのすけ,0\n");
    fprintf(fp, "2,まさおくん,30\n");
    fprintf(fp, "3,ボーちゃん,60\n");
    fprintf(fp, "4,ネネちゃん,60\n");
    fprintf(fp, "5,かざまくん,80\n");

    fclose(fp);

    return 0;
}