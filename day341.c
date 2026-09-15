#include <stdio.h>
int main()
{
int a[5] = {10, 20, 30, 40};
int n = 4;
int pos = 2;
int num = 15;
int i;
for(i = n; i > pos; i--)
{
a[i] = a[i - 1];
}
a[pos] = num;
n++;
for(i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
return 0;
}
