// program showing various operations on binary search tree
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct BSTnode
{
	 int data;
	 struct BSTnode *left,*right;
};

int find(struct BSTnode *,int);
void insert(struct BSTnode **,int);
void create(struct BSTnode**);
void inorder(struct BSTnode *);
void preorder(struct BSTnode *);
void postorder(struct BSTnode *);

void main()
{
	struct BSTnode *root=NULL;
	int ele,ch,data,res;
	clrscr();
	do
	  {
		printf("\n\n1)Create\t2)Search \t3)Insert\n4)Preorder");
		printf("\t5)Inorder\t6)Postorder\t7)Quit");
		printf("\nEnter Your Choice :");
		scanf("%d",&ch);
		switch(ch)
		   {
			case 1: create(&root);
				break;
			case 2:	printf("\nEnter the Element to be searched :");
				scanf("%d",&ele);
				res=find(root,ele);
				if(res==1)
					printf("\n ***** Element %d Not Found****",ele);
				else
					printf("\n ***** Element %d Found*****",ele);
				break;
			case 3: printf("\nEnter a Data to be Inserted : ");
				scanf("%d",&data);
				insert(&root,data);
				break;
			case 4: printf("\nPreOrder Traversal:");
				preorder(root);
				break;
			case 5: printf("\nInorder Traversal:");
				inorder(root);
				break;
			case 6: printf("\nPostOrder Traversal:");
				postorder(root);
				break;

	     }
	 }while(ch!=7);
}




void create(struct BSTnode **proot)
{
	int n,x,i,num;
	*proot=NULL;
	printf("\nEnter no. of nodes :");
	scanf("%d",&n);
	printf("\nEnter tree value :");
	scanf("%d",&num);
	 *proot =(BSTnode*) malloc ( sizeof ( struct BSTnode ) ) ;
		(*proot)-> data = num ;
		(*proot)-> left = NULL ;
		(*proot)-> right = NULL;
	for(i=0;i<n-1;i++)
	{
		printf("\nEnter tree value :");
		scanf("%d",&x);
		insert(proot,x);
	}
}


int find(struct BSTnode *proot,int x)
{
	while(proot!=NULL)
	{
		if(x==proot->data)
			return(0);
		if(x >proot->data)
			proot=proot->right;
		else
		proot=proot->left;
	}
	return(1);
}

/* inserts a new node in a binary search tree */
void insert ( struct BSTnode **proot, int num )
{
	if ( *proot == NULL )
	{
		*proot = (BSTnode*) malloc ( sizeof ( struct BSTnode) ) ;

		(*proot)-> data = num ;
		(*proot)-> left = NULL ;
		(*proot)-> right = NULL;
		return ;
	}
	else  /* search the node to which new node will be attached */
	{
		/* if new data is less, traverse to left */
		if ( num < (*proot)-> data )
			insert ( &((*proot)->left), num ) ;
		else
			/* else traverse to right */
			insert ( &((*proot)-> right), num ) ;
	}
	return ;
}

/********Traversal Functions***************/
void inorder(struct BSTnode *proot)
{

	if(proot!=NULL)
	{
		inorder(proot->left);
		printf("%d\t",proot->data);
		inorder(proot->right);
	}
}

void preorder(struct BSTnode *proot)
 {

	if(proot!=NULL)
	  { printf("%d\t",proot->data);
	    preorder(proot->left);
	    preorder(proot->right);
	  }
 }

void postorder(struct BSTnode *proot)
 {

	if(proot!=NULL)
	  {
	    postorder(proot->left);
	    postorder(proot->right);
	    printf("%d\t",proot->data);
	  }
 }




/*
OUTPUT:

1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :1
Enter no. of nodes :4


Enter tree value :12

Enter tree value :45

Enter tree value :23

Enter tree value :33


1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :2

Enter the Element to be searched :12

 ***** Element 12 Found*****

1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :2

Enter the Element to be searched :55

 ***** Element 55 Not Found****

1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :3

Enter a Data to be Inserted : 55


1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :4

PreOrder Traversal:12   45      23      33      55

1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :5

Inorder Traversal:12    23      33      45      55

1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :6

PostOrder Traversal:33  23      55      45      12

1)Create        2)Search        3)Insert
4)Preorder      5)Inorder       6)Postorder     7)Quit
Enter Your Choice :7
*/
