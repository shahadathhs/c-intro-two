#include<stdio.h>

int count_before_one(int arr[], int length) 
{
    for (int i = 0; i < length; i++)
    {
        if(arr[i] == 1)
        {
            return i;
        }
    }

    return length;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = count_before_one(arr, N);

    printf("%d", count);
   
    return 0;
}
