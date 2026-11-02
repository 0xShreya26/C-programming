
#include <stdio.h>

int main()
{
    int a, b;
    char calculator;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &calculator);

    switch(calculator)
    {
        case '+':
            printf("The sum is %d", a+b);
            break;

        case '-':
            printf("The difference is %d", a-b);
            break;

        case '*':
            printf("The multiplication is %d", a*b);
            break;

        case '/':
            if(b != 0)
                printf("The division is %.2f", (float)a/b);
            else
                printf("Division by zero is not possible");
            break;

        case '%':
            if(b != 0)
                printf("The remainder is %d", a%b);
            else
                printf("Modulus by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
