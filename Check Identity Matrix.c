#include <stdio.h>

int main() {
    int a[10][10], i, j, n, flag=1;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
                flag=0;
        }
    }

    if(flag)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}
