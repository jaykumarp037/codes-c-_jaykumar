#include<stdio.h>

void main(){
int a,b,c;
printf("enter minutes:");
scanf("%d",&a);
b=a/60;
c=a%60;
printf("%d minutes= %d hours and %d minutes",a,b,c);
}
