#include<stdio.h>

int	recursion(int value, int N)
{
    if(value > N)
    {
        return 0;
    }

    printf("%d\n", value);

    recursion(value + 1, N);
    printf("%d\n", value);

    return 0;
}

int	recursionReverse(int value)
{
    if(value < 1)
    {
        return 0;
    }

    printf("%d\n", value);

    recursionReverse(value - 1);

    return 0;
}


int main(void)
{
    int N;
    scanf("%d", &N);

    recursion(1, N);

    recursionReverse(N);

    return 0;
}
