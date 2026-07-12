#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9')
            count++;
        i++;
    }

    printf("Number of Digits = %d", count);

    return 0;
}
