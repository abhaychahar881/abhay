#include <stdio.h>
int main()
{
int a[4] = {2, 4, 6, 8};
int i, sum = 0;
for(i = 0; i < 4; i++)
{
sum = sum + a[i];
}
printf("%d", sum);
return 0;
}
