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
           if(i % 2 == 0)
           {
              printf("-");
           }
           else
           {
             printf("#");
           }
        }

        star+=2;

        printf("\n");
    
    }

    star-=2;

    int space = 1;

    for (int i = N - 1; i >= 0; i--)
    {
        star-=2;

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        for (int j = 0; j < star; j++)
        {
           if(i % 2 == 0)
           {
              printf("-");
           }
           else
           {
             printf("#");
           }
        }

        printf("\n");
    
    }

    return 0;
}
