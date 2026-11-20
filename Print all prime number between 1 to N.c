#include <stdio.h>

int main()
{
    int N, i, j, count;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 2; i <= N; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}