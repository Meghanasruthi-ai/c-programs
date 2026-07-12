#include <stdio.h>

int main()
{
    int n, temp, rev = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if(rev == n)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome");

    return 0;
}
