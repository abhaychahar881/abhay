#include <stdio.h>
int main()
{
int a[5] = {2, 9, 1, 4, 7};
int i;
int max = a[0];
int min = a[0];
for(i = 1; i < 5; i++)
{
if(a[i] > max)
{
max = a[i];
}
if(a[i] < min)
{
min=a[i];
}
}
printf("max=%d,min=%d",max,min);
return 0;
}
