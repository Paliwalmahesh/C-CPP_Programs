#include<stdio.h>
#include<stdlib.h>
struct queue{
	int data;
	struct queue* link;
};
struct queue *front=NULL;

void enqueue(){
	struct queue *temp; 
    temp = (struct queue*)malloc(sizeof(struct queue));
	printf("enter  value");
	scanf("%d",&temp->data);
    temp->link = NULL;
	
	if(front==NULL){
    front=temp;
	}
    else
	{
	struct queue *ptr;
	ptr=front;
    while(ptr->link!=NULL){
    	ptr=ptr->link;
	     }
	ptr->link=temp;
	}
}
void dequeue(){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
	struct queue *temp=front;
	printf("%d is dequeueed ",front->data);
	front=front->link;
	free(temp);
	temp=NULL;}
}
void display(struct queue *front){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
	
	struct queue *temp;
	temp=front;
	printf("Queue is\n:");
	while(temp!=NULL){
		
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
}
void main(){
int b=0;
while(b!=4){

	printf("\nenter choise");
	printf("\n1.enqueue \n2.dequeue \n3.display \n4.Exit\n");
	scanf("%d",&b);
	switch(b)
	{
		
			case 1:	
			enqueue();
			break;
			case 2:
			dequeue();
	        break;
	        case 3:
			display(front);	
			break;
		
	
	}
}
}
