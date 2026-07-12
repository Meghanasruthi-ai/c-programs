#include <stdio.h>

int main()
{
    char ch;

    printf("Enter Uppercase Letter: ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Lowercase = %c", ch + 32);
    else
        printf("Not Uppercase");

    return 0;
}
