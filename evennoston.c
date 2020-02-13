#include<stdio.h>
void main(){
int a,i=1;
printf("Enter a number\t");
scanf("%d",&a);
while(i<=a){
 if(i%2==0){
 printf("%d \t",i);
 i++;
 }
 else
  i++;
}
}
