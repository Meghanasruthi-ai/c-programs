#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    if(strstr(str, sub))
        printf("Substring Found");
    else
        printf("Substring Not Found");

    return 0;
}
