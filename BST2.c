#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root = NULL;
void insert(int);
void search(struct node *,int );
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);

void main()
{
	int choice,ele,num,ch;
	do
	{
		printf("\nselect the operation:");
		printf("\n1.Insert 2.Search 3.preorder 4.inorder 5.postorder :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter no. for inserting:");
				   scanf("%d",&ele);
				   insert(ele);
				    break;
			case 2:if(root==NULL)
					printf("\nTree is empty");
					else
					{
						printf("\nEnter value for search:");
						scanf("%d",&num);
						search(root,num);
					}
					break;
			case 3:if(root==NULL)
					printf("\nTree is empty");
					else
					preorder(root);
					break;
			case 4:if(root==NULL)
					printf("\nTree is empty");
					else
					inorder(root);
					break;
			case 5:if(root==NULL)
					printf("\nTree is empty");
					else
					postorder(root);
					break;
			default:printf("\nInvalid choice");
		}
		printf("press 1 to continue:");
		scanf("%d",&ch);	
	}while(ch==1);
}

void insert(int ele)
{
	struct node *n,*q;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=ele;
	n->left=NULL;
	n->right=NULL;
	if(root==NULL)
	{
		root=n;
		return;
	}
	q=root;
	while(q!=NULL)
	{
		if(ele<q->data)
		{
			if(q->left==NULL)
			{
				q->left=n;
				break;
			}
			else
			q=q->left;
		}
		else
		{
			if(q->right==NULL)
			{
				q->right=n;
				break;
			}
			else
			q=q->right;
		}
	}	
}

void search(struct node *p,int num)
{
	struct node *q;
	if(p->data==num)
	{
		printf("\nGiven element present at root node");
		return;
	}
	while(p!=NULL)
	{
		if(p->data!=num)
		{
			if(num<p->data)
			{
				q=p;
				p=p->left;
			}
			else
			{
				q=p;
				p=p->right;
			}
		}
		else
		break;	
	}
	
	if(p==NULL)
	{
		printf("\nGiven element not present in tree");
	}
	else
	{
		printf("%d is child of %d node\n",num,q->data);	
	}
}

void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d\t",p->data);
		preorder(p->left);
		preorder(p->right);
	}	
}

void inorder(struct node *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d\t",p->data);
		inorder(p->right);
	}	
}

void postorder(struct node *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d\t",p->data);
	}	
}

