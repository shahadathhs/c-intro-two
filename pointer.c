#include<stdio.h>

// function: pass by value
// here we only receive value, not actual variable
void changeValue(int n)
{
    n = 999;  // this will not affect original variable
}

// function: pass by reference (pointer)
// here we receive address of variable so we can change original value
void changeValueRef(int *n)
{
    *n = 555; // dereference pointer -> set original variable
}

int main(void)
{
    int x = 10;      // normal variable

    printf("%d\n", x);     // print x value
    printf("%p\n", &x);    // print address of x in memory

    int* ptr;       // pointer variable
    ptr = &x;       // store address of x in pointer

    printf("%p\n", ptr);   // print pointer value (same as &x)
    printf("%p\n", &ptr);  // print address of pointer itself

    *ptr = 100;            // dereference pointer -> change x internally
    printf("%d\n", x);     // now x is 100

    // call both functions
    changeValue(x);        // this will NOT change original value
    printf("After pass-by-value: %d\n", x);

    changeValueRef(&x);    // this WILL change original variable
    printf("After pass-by-reference: %d\n", x);

    return 0;
}
