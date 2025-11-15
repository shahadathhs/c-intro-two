#include<stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        int mainArr[N], sortedCopyArr[N], differenceArr[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &mainArr[i]);
        }

        for (int i = 0; i < N; i++) {
            sortedCopyArr[i] = mainArr[i];
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                if (sortedCopyArr[i] > sortedCopyArr[j])
                {
                    int temp = sortedCopyArr[i];

                    sortedCopyArr[i] = sortedCopyArr[j];

                    sortedCopyArr[j] = temp;
                }
            }
            
        }

        for (int i = 0; i < N; i++) {
            int difference = mainArr[i] - sortedCopyArr[i];
            
            if (difference < 0) 
            {
                difference = -difference;
            }
            
            differenceArr[i] = difference;
        }

        for (int i = 0; i < N; i++) {
            printf("%d ", differenceArr[i]);
        }

        printf("\n");
    }

    return 0;
}
