#include<stdio.h>
printf(" Write a C  menu driven program for manageing bank application whch has different menus /nlike Account balance,Withdraw money,Cash Deposit consider initial balance amount as 1000Rs./n(With every trasaction display the account balance)");

void main()
{
	float amt,amtw,amtd;
	int a,b,ch;
	amt=1000;

	printf("name:Mahesh d. Paliwal\nroll no:22442\n");
	printf("\nEnter\n1.Account balance\n2.Cash Deposit \n3. Withdraw money\n ");
	scanf("%d",&ch);
	
	
	
	
	switch(ch)
	{
	     case 1: 
		       printf("your account balance is: %f", amt );
		       break;
	     case 2:
	     	  enter:{
			   printf("enter amount to be deposite:");
			   scanf("%f",&amtd);}
			        printf("1.confirm amount\n 2.Enter again\n");
			        scanf("%d",&a);
			        if(a==2)
			           goto enter;
			        else{
					   
		             amt=amt+amtd;
		         	 printf("present balence is %f",amt);
		         	 break;}
	
	     case 3:
			enter1:{
			   printf("enter amount to be Withdraw:");
			   scanf("%f",&amtw);}
			        printf("1.confirm amount\n 2.Enter again\n");
			        scanf("%d",&b);
			        if(b==2)
			           goto enter1;
			        else   
	                   amt=amt-amtw;
	                    if(amt<0)
	                         printf("insufficient balace");
					    else    
		         	     printf("present balence is %f",amt);
					       break;	
   }
}
		         	 
		         
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
		         	 
				   
				      
		        
			   
			   
			   
			   
			   
			   
