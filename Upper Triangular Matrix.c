#include <stdio.h>

int main() {
    int a[10][10], i, j, n, flag=1;

    printf("Enter order: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            if(a[i][j]!=0)
                flag=0;

    if(flag)
        printf("Upper Triangular Matrix");
    else
        printf("Not an Upper Triangular Matrix");

    return 0;
}
