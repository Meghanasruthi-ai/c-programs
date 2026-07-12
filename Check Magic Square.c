#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int sum, rowsum, colsum, d1=0, d2=0, flag=1;

    printf("Enter order: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    sum=0;
    for(j=0;j<n;j++)
        sum+=a[0][j];

    for(i=0;i<n;i++){
        rowsum=0;
        colsum=0;
        for(j=0;j<n;j++){
            rowsum+=a[i][j];
            colsum+=a[j][i];
        }
        if(rowsum!=sum || colsum!=sum)
            flag=0;
    }

    for(i=0;i<n;i++){
        d1+=a[i][i];
        d2+=a[i][n-1-i];
    }

    if(d1!=sum || d2!=sum)
        flag=0;

    if(flag)
        printf("Magic Square");
    else
        printf("Not a Magic Square");

    return 0;
}
