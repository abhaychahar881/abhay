#include <stdio.h>
int main()
{
int a[5] = {1, 2, 3, 4, 5};
int search = 3;
int i, index = -1;
for(i = 0; i < 5; i++)
{
if(a[i] == search)
{
index = i;
break;
}
}
if(index == -1)
{
printf("-1");
}
else
{
printf("Found at index %d", index);
}
return 0;
}
