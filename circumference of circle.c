#include <stdio.h>

int main()
{
    float r, c;

    printf("Enter radius: ");
    scanf("%f", &r);

    c = 2 * 3.14159 * r;

    printf("Circumference = %.2f", c);

    return 0;
}
