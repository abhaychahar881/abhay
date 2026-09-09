#include <stdio.h>
int main()
{
int n = 5;
int i;
int factorial = 1;
for(i = 1; i <= n; i++)
{
factorial = factorial * i;
}
printf("%d", factorial);
return 0;
}
