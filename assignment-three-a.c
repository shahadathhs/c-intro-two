#include<stdio.h>

int main(void)
{
    int N;
    int sign = 1;
    
    scanf("%d", &N);
    
    int loopL = N + N -1;
    int space = N -1;
    int dec = 0;

    for (int i = loopL; i > 0; i--)
    {

        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        
        
        for (int j = 0; j < sign; j++)
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

        if(i == N)
        {
            dec = 1;
        }

        if(dec != 1)
        {
            sign+=2;
            space--;
        }
        else
        {
            sign-=2;
            space++;
        }

        printf("\n");
    
    }

    return 0;
}
