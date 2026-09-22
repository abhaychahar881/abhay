#include <stdio.h>
int main()
{
int a[3][3] = {{1, 2, 3},
               {4, 5, 6},
               {7, 8, 1}};
int i, j;
int distinct = 1;
for(i = 0; i < 3; i++)
{
for(j = i + 1; j < 3; j++)
{
if(a[i][i] == a[j][j])
{
distinct = 0;
}
}
}
if(distinct == 1)
{
printf("false");
}
else
{
printf("False");
}
return 0;
}
