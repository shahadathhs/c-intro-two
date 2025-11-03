#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;

    scanf("%d", &target);

    printf("%d %d \n", N, target);
    bool isTarget = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d \n", i, j);
                isTarget = true;
            }
        }
        
    }

    if (isTarget)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
