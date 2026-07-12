#include <stdio.h>

int main()
{
    int n, square, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    square = n * n;

    while(square != 0)
    {
        sum += square % 10;
        square /= 10;
    }

    if(sum == n)
        printf("Neon Number");
    else
        printf("Not a Neon Number");

    return 0;
}
