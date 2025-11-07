#include<stdio.h>

void odd_even() 
{
    int N;
    scanf("%d", &N);
    
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int even = 0;
    int odd = 0;

    for (int i = 0; i < N; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d %d", even, odd);
}

int main(void)
{
    odd_even();
   
    return 0;
}
