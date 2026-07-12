#include <stdio.h>

int main()
{
    int a[100], freq[100];
    int n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        if(freq[i] == 0)
            continue;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        freq[i] = count;
    }

    printf("Element\tFrequency\n");

    for(i = 0; i < n; i++)
    {
        if(freq[i] != 0)
            printf("%d\t%d\n", a[i], freq[i]);
    }

    return 0;
}
