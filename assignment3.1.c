//queue
#include<stdio.h>
#define n 50
	int front;
	int rear;
	int queue[n];


void init();
void enqueue(int num);
int dequeue();
void display();

void main()
{
	int choice,ch,num,num1;
	do
	{
		printf("\n1.intialize queue 2.Enqueue 3.Dequeue 4.Display 5.exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{init();
				break;
			}
		
			
			case 2:if (rear>=n-1)
					{
						printf("\nqueue is full");
					}
					else
					{
						printf("\nenter the elements for insert:");
						scanf("%d",&num);
						enqueue(num);
					}
					break;
			case 3:if(front==-1)
					{
						printf("\nqueue is empty");
					}
					else
					{
						num1=dequeue();
						printf("\ndequeue element is : %d",num1);
					}
					break;
			case 4:if(front==-1)
					{
						printf("\nqueue is empty");
					}
					else
					{
						printf("\nequeue element:");
						display();
					}
					break;
		}
//		printf("\npress 1 to continue:");
//		scanf("%d",&ch);	
	}while(choice!=5);
}

void init()
{
	front=-1;
	rear=-1;
}

void enqueue(int num)
{
	if(front==-1)
	{
		front=0;
	}
	rear++;
	queue[rear]=num;
}



int dequeue()
{
	int temp;
	temp=queue[front];
	
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front++;
	}
	return temp;
}

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("\n%d",queue[i]);
	}
}

