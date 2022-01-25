#include<stdio.h>

#include<ctype.h>

#define size 50

struct stack

{

int a[size];

int top;

}s;

void initialise(struct stack *s)

{

s->top=-1;

}

void push(struct stack *s, int data)

{

s->top=s->top+1;

s->a[s->top]=data;

}

int pop(struct stack *s)







{

int data;

data=s->a[s->top];

s->top=s->top-1;

return(data);

}


void evaluate(char postfix[])

{

int op1,op2,val,i;

val=0;

initialise(&s);

for(i=0;postfix[i]!='\0';i++)

{

if(isalpha(postfix[i]))

{

printf("\tEnter the value of %c: ",postfix[i]);

scanf("%d",&val);

push(&s,val);

}

else

{

op2=pop(&s);

op1=pop(&s);

switch(postfix[i])

{

case '+':

push(&s,op1+op2);

break;

case '-':

push(&s,op1-op2);

break;

case '*':

push(&s,op1*op2);

break;

case '/':




push(&s,op1/op2);

break;

default:

printf("\nInvalid input");

}

}

}


val=pop(&s);

printf("\n\tResult is: %d",val);

}

void main()

{
char postfix[30];

printf("\n\tEnter a postfix expression to evaluate: ");

gets(postfix);

evaluate(postfix);

}

