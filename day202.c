#include <stdio.h>
int main()
{
char n[] = "1010";
int i;
for(i = 0; n[i] != '\0'; i++)
{
if(n[i] == '0')
{
printf("1");
}
else
{
printf("0");
}
}
return 0;
}
