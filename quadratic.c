#include <stdio.h>
#include <math.h>
int main(){
float a = 1;
float b = -3;
float c = 2;
float d, root1, root2;
d = b * b - 4 * a * c;
if (d > 0)
{
root1 = (-b + sqrt(d)) / (2 * a);
root2 = (-b - sqrt(d)) / (2 * a);
printf("Roots are real and different: %g, %g", root1, root2);
}
else if (d == 0)
{
root1 = -b / (2 * a);
printf("Roots are real and same: %g", root1);
}
else
{
printf("Roots are complex");
}
return 0;
}
