#include <stdio.h>
int main()
{
int a[2][2] = {{1, 2}, {2, 1}};
int i, j;
int symmetric = 1;
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{
if(a[i][j] != a[j][i])
{
symmetric = 0;
}
}
}
if(symmetric == 1)
{
printf("True");
}
else
{
printf("False");
}
return 0;
}
