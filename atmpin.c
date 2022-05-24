//amount in bank=1000
//Enter pin

#include<stdio.h>
#include<stdlib.h>
int amount=1000,pin,choice,withdraw,deposit,temp;
char transaction;
int main()
{
	printf("***Welcome to SBI Bank:***\n");
	while(pin!=1234)
	{
	printf("Enter your pin:\n");
	scanf("%d",&pin);
	if(pin!=1234)
	  printf("Enter valid password:\n");
	}
	do
	{
	  system("cls");
      printf("***Welcome to SBI Bank***\n");
      printf("1.Balance enquiry\n");
      printf("2.Cash withdrawal\n");
      printf("3.Deposit cash\n");
      printf("4.Quit\n");
      printf("Enter your choice:\n");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	  	case 1:
	  		system("cls");
	  		printf("Your account balance is:%d\n",amount);
	  		break;
	  	case 2:
	  		system("cls");
	  		printf("Enter amount to withdraw:\n");
	  		scanf("%d",&withdraw);
	  		if(withdraw%100!=0)
	  		{
	  			printf("Enter amount in multiples of 100\n");
			}
			else if(withdraw> (amount-500))
			{
				printf("Insufficient balance\n");
			}
			else
			{
				amount=amount-withdraw;
				printf("Please collect your cash...\n");
				printf("Remaining balance is: %d \n",amount);
			}
			break;
			case 3:
				system("cls");
				printf("Enter the amount to deposit:\n");
				scanf("%d",&deposit);
				amount=amount+deposit;
				printf("Your balance is: %d\n",amount);
				break;
			case 4:
				system("cls");
				printf("Thankyou for using SBI Bank:\n");
		        printf("Visit Again:\n");
		        return 0;
		    default:
		    	system("cls");
		    	printf("Invalid choice\n");
	  }
	  printf("Do you wish to have another transaction:\n");
	  printf("(Y/N)\n");
	  fflush(stdin);
	  scanf("%c",&transaction);
	  if(transaction=='N')
	  {
	  	temp=1;
	  }
	}while(!temp);
	
	printf("Thankyou for using SBI Bank\n");
	printf("Visit Again\n");
 return 0;
}
	

