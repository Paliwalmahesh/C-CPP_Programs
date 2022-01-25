#include <stdio.h>

struct stack
{
	int value;
	struct stack *link;
};
struct stack *top=NULL;



void push()
{
	struct stack *temp;
	int val;
	temp=(struct stack*)malloc(sizeof(struct stack));
	printf("Enter Value: ");
	scanf("%d", &val);
	temp->value=val;
	temp->link=top;
	top=temp;
	printf("Node with value %d added",val);
}

void pop()
{
	struct stack *temp;
	if(top==NULL)
		printf("Empty Stack");
	else
	{
		printf("Node popped %d: ",top->value);
		temp=top;
		top=top->link;
		free(temp);
	}

}
void display()
{
	struct stack *temp=top;
	if(temp==NULL)
		printf("Stack Empty");
	else
		while(temp!=NULL)
		{
			printf("%d-> ", temp->value);
			temp=temp->link;
		}

}

void main()
{
	int ch;
	while(1)
	{

		printf("MENU");
		printf("\n\n1.PUSH New Node");
		printf("\n2.POP Node");
		printf("\n3.DISPLAY Stack");
		printf("\n\nEnter Your Choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:	push();
                    break;
			case 2: pop();
                    break;
			case 3: display();
                    break;
		}
	}
}
