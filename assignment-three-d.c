#include<stdio.h>
#include <string.h>

int is_palindrome(char s[]) 
{
    int length = strlen(s);

    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 -i])
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    char s[1000];
    scanf("%s", s);

    int res = is_palindrome(s);

    if(res == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
   
    return 0;
}
