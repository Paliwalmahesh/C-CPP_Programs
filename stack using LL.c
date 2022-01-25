#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack* link;
};
struct stack *head=NULL;

	
void push(){
	struct stack *temp;
	temp = (struct stack*)malloc(sizeof(struct stack));
	printf("enter value");+
	scanf("%d",&temp->data);
    temp->link = NULL;
    
	if(head==NULL){
    head=temp;}
	else{
    temp->link = head;
    head=temp;}
}
void display(struct stack *head){
	if(head==NULL){
		printf("stack is empty");
	}
	else
	{
	struct stack *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
}
void pop(){
	if(head==NULL){
		printf("stack is empty");
	}
	else
	{
	
	struct stack *temp=head;
	printf("%d is Poped ",head->data);
	head=head->link;
	free(temp);
	temp=NULL;}
}


void main(){
int b=0;
while(b !=4){

	printf("\nenter choise");
	printf(" \n1.push \n2.pop \n3.display \n4.Exit\n");
	scanf("%d",&b);
	switch(b)
	{
		
			break;
			case 1:	
			push();
			break;
			case 2:
			pop();
	        break;
	        case 3:
			display(head);	
			break;
		
	
	}
}
}






