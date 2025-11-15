#include<stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int lineToAdd = N / 2;

    int line = 6 + lineToAdd;
    int star = 1;

    scanf("%d", &N);

    for (int i = line; i > 0; i--)
    {

        for (int j = i -1; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        star+=2;

        printf("\n");
    
    }

    for (int i = 5; i > 0; i--)
    {

        for (int j = 5; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < N; j++)
        {
            printf("*");
        }

        printf("\n");
    
    }

    return 0;
}
