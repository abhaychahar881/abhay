#include <stdio.h>
int main()
{
int a[10][10];
int row, col, i, j;
scanf("%d %d", &row, &col);
for(i = 0; i < row; i++)
{
for(j = 0; j < col; j++)
{
scanf("%d", &a[i][j]);
}
}
for(j = 0; j < col; j++)
{
for(i = 0; i < row; i++)
{
printf("%d ", a[i][j]);
}
printf("\n");
}
return 0;
}
