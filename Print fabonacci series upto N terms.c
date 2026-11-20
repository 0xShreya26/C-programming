#include <stdio.h>

int main()
{
    int N, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
