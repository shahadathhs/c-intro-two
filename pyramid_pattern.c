#include<stdio.h>

int main(void)
{
    int N;
    int star = 1;

    scanf("%d", &N);

    for (int i = N; i > 0; i--)
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


    printf("\n\nNew Pattern \n\n");
    int star2 = 1;

    for (int i = N; i > 0; i--)
    {

        for (int j = i -1; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < star2; j++)
        {
            printf("*");
        }

        star2++;

        printf("\n");
    
    }

    return 0;
}
