#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int sum, i, j;

    for(sum = 0; sum <= 4; sum++)
    {
        for(i = 0; i < 3; i++)
        {
            j = sum - i;

            if(j >= 0 && j < 3)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
