#include <stdio.h>
int main()
{
int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
int i, j;
int sum = 0;
for(i = 0; i < 2; i++)
{
for(j = 0; j < 3; j++)
{
sum = sum + a[i][j];
}
}
printf("%d", sum);
return 0;
}
