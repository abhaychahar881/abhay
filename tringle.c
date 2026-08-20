#include <stdio.h>
int main(){
int side1 = 3;
int side2 = 3;
int side3 = 3;
if (side1 == side2 && side2 == side3)
{
printf("Equilateral");
}
else if (side1 == side2 || side2 == side3 || side1 == side3)
{
printf("Isosceles");
}
else
{
printf("Scalene");
}
return 0;
}
