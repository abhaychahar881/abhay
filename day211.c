#include <stdio.h>
int main()
{
int n = 1234;
int first, last, temp, power = 1;
last = n % 10;
temp = n;
while(temp >= 10)
{
temp = temp / 10;
power = power * 10;
}
first = temp;
n = n - first * power - last;
n = n + last * power + first;
printf("%d", n);
return 0;
}
