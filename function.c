#include<stdio.h>

// return_with_para_func
int sum (int a, int b)
{
    int ans = a + b;
    return ans;
}

int main(void)
{
    int res = sum(10, 20);

    printf("%d", res);

    return 0;
}
