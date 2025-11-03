#include<stdio.h>

int main(void)
{
     int N;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
               int temp = arr[i];

               arr[i] = arr[j];

               arr[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (arr[i] < arr[j])
            {
               int temp = arr[i];

               arr[i] = arr[j];

               arr[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
