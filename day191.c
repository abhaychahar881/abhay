#include <stdio.h>
int main()
{
int a = 4;
int b = 5;
int lcm;
lcm = (a > b) ? a : b;
while(1)
{
if(lcm % a == 0 && lcm % b == 0)
{
printf("%d", lcm);
break;
}
lcm++;
}
return 0;
}
