#include <stdio.h>
int main()
{
int n = 153;
int original, remainder, sum = 0;
original = n;
while(n != 0)
{
remainder = n % 10;
sum = sum + (remainder * remainder * remainder);
n = n / 10;
}
if(original == sum)
{
printf("Armstrong");
}
else
{
printf("Not Armstrong");
}
return 0;
}
