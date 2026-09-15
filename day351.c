#include <stdio.h>
int main()
{
int a[5] = {10, 20, 30, 40, 50};
int i;
int largest = a[0];
int second = a[0];
for(i = 0; i < 5; i++)
{
if(a[i] > largest) 
{
second = largest;
largest = a[i];
}
else if(a[i] > second && a[i] != largest)
{
second = a[i];
}
}
printf("%d", second);
return 0;
}
