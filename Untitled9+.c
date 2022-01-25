 #include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define n 5

struct stack
{
	int top;
	int a[n];
}st;

void create();
int stackfull(struct stack);
void push(int);
int stackempty(struct stack);
int pop();
void postfixevaluation(char []);
int evaluate(char,int,int);


void main()
{
	
	char postfix[50];
	printf("\n Enter the postfix Expression:");
	scanf("%s",postfix);
	
	postfixevaluation(postfix);
	
}

void create()
{
	st.top=-1;
	printf("\nSuccessfully created the stack");
}

int stackfull(struct stack st)
{
	if(st.top>=n-1)
	return 1;
	else
	return 0;
}

void push(int num)
{
	st.top++;
	st.a[st.top]=num;
}

int stackempty(struct stack st)
{
	if(st.top==-1)
	return 1;
	else 
	return 0;
}

int pop()
{
	int temp;
	temp=st.a[st.top];
	st.top--;
	return temp;
}

void postfixevaluation(char postfix[])
{
	int index=0,length;
	int op1,op2,result;
	char symbol;
	
	length = strlen(postfix);
	while(index<length)
	{
		if(isdigit(postfix[index]))
		{
			push(postfix[index]-'0');
		
		}
		else
		{
			op2=pop();
			op1=pop();
			result=evaluate(postfix[index],op1,op2);
			push(result);
			
		}
	index++;
	}
	result=pop();
	printf("result = %d",result);
}

int evaluate(char symbol,int op1, int op2)
{
	switch(symbol)
	{
		case '+' : return(op1+op2);
		           break;
		case '-' : return(op1-op2);
		           break;
		case '*' : return(op1*op2);
		           break;
		case '/' : return(op1/op2);
		           break;
		case '^' : return(pow(op1,op2));
		           break;
	    default: printf("\nInvalid operation");
	}
}

