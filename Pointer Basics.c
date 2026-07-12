#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)&a);
    printf("Pointer value = %d", *p);

    return 0;
}
