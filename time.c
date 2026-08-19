#include <stdio.h>
int main(){
int Seconds = 3661;
int hours;
int minutes;
int seconds;
hours = Seconds / 3600;
minutes = (Seconds % 3600) / 60;
seconds = Seconds % 60;
printf("%d:%d:%d", hours, minutes, seconds);
return 0;
}
