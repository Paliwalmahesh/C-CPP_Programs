#include<stdio.h>
int main(){
	
	int n,a,i,max=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  printf("enter numbers %d :",i+1);
		scanf("%d",&a);
		if(a>max){
		
		max=a;
	}
}
printf("largest number is %d",max);	
}
