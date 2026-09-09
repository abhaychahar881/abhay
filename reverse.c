#include <stdio.h>
int main()
{
int n = 1234;
int reverse = 0, remainder;
while(n != 0)
{
remainder = n % 10;
reverse = reverse * 10 + remainder;
n = n / 10;
}
printf("%d", reverse);
return 0;
}
