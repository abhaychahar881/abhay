#include <stdio.h>
int main()
{
int a = 12;
int b = 18;
int i, hcf;
for(i = 1; i <= a && i <= b; i++)
{
if(a % i == 0 && b % i == 0)
{
hcf = i;
}
}
printf("%d", hcf);
return 0;
}
