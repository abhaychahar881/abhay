#include <stdio.h>
int main()
{
int n = 121;
int original, reverse = 0, remainder;
original = n;
while(n != 0)
{
remainder = n % 10;
reverse = reverse * 10 + remainder;
n = n / 10;
}
if(original == reverse)
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
return 0;
}
