#include <stdio.h>

int main() {
    int a[100], n, i;
    int smallest, second;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    smallest = second = 99999;

    for(i = 0; i < n; i++) {
        if(a[i] < smallest) {
            second = smallest;
            smallest = a[i];
        } else if(a[i] < second && a[i] != smallest) {
            second = a[i];
        }
    }

    printf("Second Smallest = %d", second);

    return 0;
}
