#include <stdio.h>

int main()
{
    int n, square, temp;

    printf("Enter Number: ");
    scanf("%d", &n);

    square = n * n;
    temp = n;

    while(temp > 0)
    {
        if(temp % 10 != square % 10)
        {
            printf("Not an Automorphic Number");
            return 0;
        }

        temp /= 10;
        square /= 10;
    }

    printf("Automorphic Number");

    return 0;
}
