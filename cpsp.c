#include <stdio.h>
int main(){
float cp = 1000;
float sp = 1200;
float profit, loss, percentage;
if (sp > cp)
{
profit = sp - cp;
percentage = (profit / cp) * 100;
printf("Profit %.0f%%", percentage);
}
else if (cp > sp)
{
loss = cp - sp;
percentage = (loss / cp) * 100;
printf("Loss %.0f%%", percentage);
}
else
{
printf("No Profit No Loss");
}
return 0;
}
