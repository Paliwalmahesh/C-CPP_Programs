#include<stdio.h>
#include<stdlib.h>
struct linklist{
	int data;
	struct linklist* link;
	
};
struct linklist *head=NULL;
void create(){
	
	struct linklist *temp; 
    temp = (struct linklist*)malloc(sizeof(struct linklist));
	printf("enter 1st value");
	scanf("%d",&temp->data);
    temp->link = NULL;
    head=temp;
    
	
	
}
void add(struct linklist *head ){

	struct linklist *temp ,*ptr;
	ptr=head;
    temp = (struct linklist*)malloc(sizeof(struct linklist));
    printf("enter  value");
	scanf("%d",&temp->data);
    temp->link = NULL;
    while(ptr->link!=NULL){
    	ptr=ptr->link;
	}
	ptr->link=temp;
	
	
}
void display(struct linklist *head){
	
	struct linklist *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}

void main(){
int b=0;
while(b !=4){

	printf("enter choise");
	printf("\n1.create LLd\n2.add in LL\n3.displayLL\n");
	scanf("%d",&b);
	switch(b)
	{
			case 1:
				
				create();
				break;
			case 2:
				
			add(head);
				break;
			case 3:
			display(head);
	            break;
	
	}
}
}

