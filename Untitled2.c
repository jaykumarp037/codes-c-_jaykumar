#include<stdio.h>

int main(){
int min,hr;
printf("enter minutes(onlyinmultiple of 60):");
scanf("%d", &min);
hr= min/60;
printf("%d min= %d hr",min,hr );
}
