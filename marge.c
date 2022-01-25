#include <stdio.h>
void marge(int a[] ,int al[],int n1 ,int ar[],int n2){
	int i1 = n1;
	int j1 = n2;
	int i=0,j=0,k=0;
	
	while (i < i1 && j < j1) 
	{ 
		if (al[i] <= ar[j]) 
		{ 
			a[k] = al[i]; 
			i++; 
		} 
		else
		{ 
			a[k] = ar[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < i1) 
	{ 
	
		a[k] = al[i]; 
		i++; 
		k++; 
	} 
	while (j < j1) 
	{ 
		a[k] = ar[j]; 
		j++; 
		k++; 
	} 
} 
	
	
int mergeS(int a[],int s)
{    int d;
	if(s < 2){
	  return 0;
	
	}
	else{
	
		int i,j;
		int m =(s/2);
		int n1=m;
		int n2=s-m;
		int al[n1];
		int ar[n2];
		for(i = 0; i < n1; i++) 
		al[i] = a[i];
		for( i = 0; i < n2; i++) 
		ar[i] = a[n1+i];
		mergeS(al,n1);
		mergeS(ar,n2);
		marge(a,al,n1,ar,n2);}
		
}


void main(){
	int s;
	int array[100];
	printf("enter no of element");
	scanf("%d",&s);
        
        int i;
        printf("enter the element of an array \t");
        for (i = 0; i < s; i++)
        scanf("%d", &array[i]);
        mergeS(array,s);
        printf(" elements of a given array \n");
        for (i = 0; i < s; i++)
            printf( "%d\t", array[i]) ; 
	
	
	
}
