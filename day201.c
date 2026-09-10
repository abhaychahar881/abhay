#include <stdio.h>
int main()
{
int n = 12345;
int remainder;
int product = 1;
while(n != 0)
{
remainder = n % 10;
if(remainder % 2 != 0)
{
product = product * remainder;
}
n = n / 10;
}
printf("%d", product);
return 0;
}
