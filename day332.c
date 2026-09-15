#include <stdio.h>
int main()
{
int a[6] = {1, 2, 4, 5, 6};
int n = 5;
int num = 3;
int i, pos = 0;
while(pos < n && a[pos] < num)
{
pos++;
}
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
