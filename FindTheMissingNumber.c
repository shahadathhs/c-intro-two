#include<stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long long M, a, b, c;
        scanf("%lld %lld %lld %lld", &M, &a, &b, &c);

        long long d = a * b * c;

        if (M == 0)
        {
            printf("0\n");
        }
        else if (M % d == 0)
        {
            printf("%lld\n", M / d);
        }
        else
        {
            printf("-1\n");
        }
        
    }
    

    return 0;
}
