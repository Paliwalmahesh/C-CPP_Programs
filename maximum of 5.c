#include<stdio.h>
int main(){
	
	int n,a,i,max=0;
	
	for(i=0;i<5;i++)
	
	{   printf("enter numbers %d :",i+1);
		scanf("%d",&a);
		if(a>max){
		
		max=a;
	}
}
printf("largest number is %d",max);	
}
