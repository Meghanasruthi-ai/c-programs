#include <stdio.h>

int isPrime(int n)
{
    if(n <= 1)
        return 0;

    for(int i = 2; i <= n / 2; i++)
