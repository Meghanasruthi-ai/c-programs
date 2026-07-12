#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter expression (a + b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+': printf("Result = %d", a+b); break;
        case '-': printf("Result = %d", a-b); break;
        case '*': printf("Result = %d", a*b); break;
        case '/':
            if(b != 0)
                printf("Result = %.2f", (float)a/b);
            else
                printf("Division by zero!");
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}
