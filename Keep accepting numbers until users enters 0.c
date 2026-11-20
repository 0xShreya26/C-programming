#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

    } while(n != 0);

    printf("Program ended.");

    return 0;
}