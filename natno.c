#include<stdio.h>
void main(){
int a,sum=0,i=1;
printf("Enter a number\t");
scanf("%d",&a);
while(i<=a){
 sum=sum+i;
 i++;
}
printf("sum = %d",sum);
}
