#include <stdio.h>

int main()
{
    float l, b, p;

    printf("Enter length and breadth: ");
    scanf("%f%f", &l, &b);

    p = 2 * (l + b);

    printf("Perimeter = %.2f", p);

    return 0;
}
