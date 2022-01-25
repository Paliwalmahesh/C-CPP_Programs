#include<stdio.h>
int main(){

int unit,bill,extra,extra1;

   printf("enter unit\n");
    scanf("%d",&unit);

 if(unit<100)
 {
 	
 	bill=unit*1;
 	printf("your total bill:%d",bill);
 }
 else if(100<unit<150){
 	extra=unit-100;
 	bill=100+(extra*5);
 	printf("your total bill:%d",bill);
 
 
 
 }
 else if(150<unit){
 	
 	extra=unit-100;
 	extra1=unit-150;
 	bill=100+(extra*5)+(extra1*10);
 	printf("your total bill:%d",bill);}
 }
