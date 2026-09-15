#include <stdio.h>
int main()
{
int a[3] = {1, 2, 3};
int b[2] = {4, 5};
int c[5];
int i;
for(i = 0; i < 3; i++)
{
c[i] = a[i];
}
for(i = 0; i < 2; i++)
{
c[i + 3] = b[i];
}
for(i = 0; i < 5; i++)
{
printf("%d ", c[i]);
}
return 0;
}
