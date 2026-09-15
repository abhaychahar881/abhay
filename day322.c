#include <stdio.h>
int main()
{
int n = 112233;
int count[10] = {0};
int digit, i;
int max = 0, answer = 0;
while(n != 0)
{
digit = n % 10;
count[digit]++;
n = n / 10;
}
for(i = 0; i < 10; i++)
{
if(count[i] > max)
{
max = count[i];
answer = i;
}
}
printf("%d", answer);
return 0;
}
