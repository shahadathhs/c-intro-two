#include<stdio.h>

void print_array(int arr[], int N, int idx)
{
    if(idx == N)
    {
        return;
    }

    printf("%d\n", arr[idx]);

    print_array(arr, N, idx + 1);
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

    print_array(arr, N, 0);

    return 0;
}
