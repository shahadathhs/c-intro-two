#include<stdio.h>

int main(void)
{
    int x = 10;

    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;

    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    *ptr = 100;

    printf("%d\n", x);

    return 0;
}
