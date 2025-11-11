#include<stdio.h>

int	recursion(int value, int N)
{
    if(value > N)
    {
        return 0;
    }

    printf("%d\n", value);

    recursion(value + 1, N);

    return 0;
}


int main(void)
{
    int N;
    scanf("%d", &N);

    recursion(1, N);

    return 0;
}
