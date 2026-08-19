#include <stdio.h>
int main(){
char character = 'A';
if (character >= 'A' && character <= 'Z')
{
printf("Uppercase alphabet");
}
else if (character >= 'a' && character <= 'z')
{
printf("Lowercase alphabet");
}
else if (character >= '0' && character <= '9')
{
printf("Digit");
}
else
{
printf("Special character");
}
return 0;
}
