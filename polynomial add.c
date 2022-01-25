#include<stdio.h>
#include<stdlib.h>
struct poly{
	int coef;
	int expo;
	struct poly* link;
};
   struct poly *first=NULL;
   struct poly *second=NULL;
   struct poly *result=NULL;
void add1 (){
	struct poly *temp; 
    temp = (struct poly*)malloc(sizeof(struct poly));
	printf("enter  coef");
	scanf("%d",&temp->coef);
	printf("enter  expo");
	scanf("%d",&temp->expo);
    temp->link = NULL;
	
	if(first==NULL){
    first=temp;
	}
    else
	{
	struct poly *ptr;
	ptr=first;
    while(ptr->link!=NULL){
    	ptr=ptr->link;
	     }
	ptr->link=temp;
	}
}
void add2 (){
	struct poly *temp; 
    temp = (struct poly*)malloc(sizeof(struct poly));
	printf("enter  coef");
	scanf("%d",&temp->coef);
	printf("enter  expo");
	scanf("%d",&temp->expo);
    temp->link = NULL;
	
	if(second==NULL){
    second=temp;
	}
    else
	{
	struct poly *ptr;
	ptr=second;
    while(ptr->link!=NULL){
    	ptr=ptr->link;
	     }
	ptr->link=temp;
	}
}

void display(struct poly *front){
	if(front==NULL){
		printf("polynomial is empty");
	}
	else{
	
	struct poly *temp;
	temp=front;
	printf("poly is\n:");
	int n=0;
	while(temp!=NULL){
	
		if(n>0){
			printf("+");
		}
		
		printf("%dx^%d",temp->coef,temp->expo);
		temp=temp->link;
		n++;
	}
}
}
void addPolynomials()
{
 	struct poly* temp = (struct poly*)malloc(sizeof(struct poly));
 	temp->link = NULL;
 	result = temp;
 	while(first && second)
 	{
 		if(first->expo > second->expo)
 		{
 			temp->coef = first->coef;
 			temp->expo = first->expo;
 			first = first->link;
 		}
 		else if(first->expo < second->expo)
 		{
 			temp->coef = second->coef;
 			temp->expo = second->expo;
 			second = second->link;
 		}
 		else
 		{
 			temp->coef = first->coef + second->coef;
 			temp->expo = first->expo;
 			first = first->link;
 			second = second->link;
 		}

 		if(first && second)
 		{
 			temp->link = (struct poly*)malloc(sizeof(struct poly));
 			temp = temp->link;
 			temp->link = NULL;
 		}
 	}
 	while(first || second)
 	{
 		temp->link = (struct poly*)malloc(sizeof(struct poly));
 		temp = temp->link;
 		temp->link = NULL;
 			
 		if(first)
 		{
 			temp->coef = first->coef;
 			temp->expo = first->expo;
 			first = first->link;
 		}

 		else if(second)
 		{
 			temp->coef = second->coef;
 			temp->expo = second->expo;
 			second = second->link;
 		}
 	}
}
void main(){
	
   int a,b;
   printf("enter first polynomial\n");
   menu:
   	{ add1();
	   }
	   printf("for adding more terms press 0\n");
	   scanf("%d",&a);
	   if(a==0){
	   	goto menu;
	   }
	 printf("enter second polynomial\n");
   menu1:
   	{ add2 ();	   
	   }
	   printf("for adding more terms press 0\n");
	   scanf("%d",&b);
	   if(b==0){
	   	goto menu1;
	   }
	 display(first);
	 printf("\n");
	 display(second);
	 printf("\n");
	 addPolynomials();
	 display(result);
   
	
	
	
	
}


