#include <stdio.h>

int getNumber()
{
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int num = getNumber();

    printf("Number = %d", num);

    return 0;
}
