/*selection sort*/

#include<stdio.h>
#include<conio.h>
#define SIZE 50

void sort(int [],int);
void accept(int [],int);

void main()
{
	int noe,nos[SIZE];

	printf("Enter no of elements:- ");
	scanf("%d",&noe);
	accept(nos,noe);
	sort(nos,noe);
	getch();
}

void accept(int nos[],int noe)
{
	int i;
	printf("Enter elements:- ");
	for(i=0;i<noe;i++)
		scanf("%d",&nos[i]);
}

void sort(int nos[],int noe)
{
	int i,j,comp_cntr=0,temp,swap_cntr=0;
	for(i=0;i<noe;i++)
	{
		for(j=i+1;j<noe;j++)
		{
			comp_cntr++;
			if(nos[i]>nos[j])
			{
				swap_cntr++;
				temp=nos[i];
				nos[i]=nos[j];
				nos[j]=temp;
			}

		}
		printf("\nAfter iteration %d array is ",i+1);

		for(j=0;j<noe;j++)
			printf("%d  ",nos[j]);

	}
	printf("\nThe no. of comparisons are:- %d",comp_cntr);
	printf("\nThe no. of swappings are:- %d",swap_cntr);
}

