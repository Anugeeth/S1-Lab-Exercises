#include<stdio.h>
void main(){
int a;
printf("Enter a number\t");
scanf("%d",&a);
if(a<0)
printf("Negative\n");
else if(a>0)
printf("Positive\n");
else
printf("Zero\n");
}
