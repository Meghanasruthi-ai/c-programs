#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b)
        printf("%d is Largest", a);
    else
        printf("%d is Largest", b);

    return 0;
}
