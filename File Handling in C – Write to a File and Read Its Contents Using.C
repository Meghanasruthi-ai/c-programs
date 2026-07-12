#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "w");
    fprintf(fp, "Welcome to C Programming");
    fclose(fp);

    fp = fopen("sample.txt", "r");

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}
