#include <stdio.h>
int main()
{
int a[5] = {1, 2, 3, 4, 5};
int n = 5;
int k = 2;
int i, j, temp;
for(i = 1; i <= k; i++)
{
temp = a[n - 1];
for(j = n - 1; j > 0; j--)
{
a[j] = a[j - 1];
}
a[0] = temp;
}
for(i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
return 0;
}
