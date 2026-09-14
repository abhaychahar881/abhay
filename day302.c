#include <stdio.h>
int main()
{
int a[5] = {-1, 0, 1, 2, -2};
int i;
int positive = 0, negative = 0, zero = 0;
for(i = 0; i < 5; i++)
{
if(a[i] > 0)
{
positive++;
}
else if(a[i] < 0)
{
negative++;
}
else
{
zero++;
}
}
printf("Positive=%d, Negative=%d, Zero=%d",
positive, negative, zero);
return 0;
}
