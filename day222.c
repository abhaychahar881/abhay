#include <stdio.h>
int main()
{
int n = 3;
int i;
float sum = 1.0;
for(i = 1; i < n; i++)
{
sum = sum + (float)(2 * i + 1) / (2 * i + 2);
}
printf("Approximate sum: %.1f", sum);
return 0;
}
