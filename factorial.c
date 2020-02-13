#include<stdio.h>
void main(){
int a,fact=1,i=1;
printf("Enter a number\t");
scanf("%d",&a);
while(i<=a){
 fact=fact*i;
 i++;
}
printf("Factorial = %d",fact);
}
