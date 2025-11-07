#include<stdio.h>

int main(void)
{
    int N;
    
    scanf("%d", &N);

    int space = N -1;

    for (int i = 0; i < N; i++)
    {
        for (int i = space; i > 0; i--)
        {
            printf(" ");
        }
        space--;
        
        for (int j = i + 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
