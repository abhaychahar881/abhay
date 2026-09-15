#include <stdio.h>
int main()
{
int a[5] = {1, 3, 5, 7, 9};
int search = 7;
int low = 0, high = 4, mid;
int index = -1;
while(low <= high)
{
mid = (low + high) / 2;
if(a[mid] == search)
{
index = mid;
break;
}
else if(a[mid] < search)
{
low = mid + 1;
}
else
{
high = mid - 1;
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
