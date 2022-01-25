#include <stdio.h>
int top=-1;
void main()
{
	int stack[5];
	int size=4,n;
	int ch,x;
	while(x!=4)
	{
	    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		case 1:
			   printf("enter element");
			   scanf("%d",&n);
			   push(stack,n,size);
			   break;
		case 2:
			   pop(stack,size);
			   break;
		case 3:
			   display(stack,size);
			   break;
		case 4:
			   printf("Exit");
			   break;
	}
	x=ch;
	}
}
int display(int stack[],int size)
{
	int i;
	printf("Stack elments are:\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
int push(int stack[],int n,int size)
{
	if(top==size-1)
	{
	 printf("stack is full\n");
	}
	else
	{
		top++;
		stack[top]=n;
	}
	return top;
}
int pop(int stack[],int size)
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("%d element pop from stack \n",stack[top]);
		top--;
		return top;
	}
}


