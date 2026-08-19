#include <stdio.h>
int main(){
int principal = 1000;
int rate = 5;
int time = 2;
float simpleInterest;
float compoundInterest;
simpleInterest = principal * rate * time / 100;
compoundInterest = principal * (1 + rate / 100)* (1 + rate / 100) - principal;
printf("Simple Interest=%.0f, Compound Interest=%.1f",
simpleInterest, compoundInterest);
return 0;
}
