#include<stdio.h>
#include<conio.h>



int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;	
}

int product(int a,int b)
{
	return a*b;	
}

int divide(int a,int b)
{
	return a/b;	
}

int modulus(int a,int b)
{
	return a%b;	
}
void main()
{
	
	int ch,num1,num2;
	
	restart:
	
	printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for exit\n");
	
	printf("\nEnter Your Choice : ");
	scanf("%d",&ch);
	
	if(ch==0)
	{
		goto end;
	}
	
	printf("\nEnter First Number : ");
	scanf("%d",&num1);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&num2);	
	
	switch(ch)
	{
		case 1 : printf("Sum is:%d\n",sum(num1,num2));
		break;
		
		case 2 : printf("\nSubstraction is:%d\n",sub(num1,num2));
		break;
		
		case 3 : printf("\nMultiplication  is: %d.\n",product(num1,num2));
		break;
		
		case 4 : printf("\nDivision is: %d\n",divide(num1,num2));
		break;
		
		case 5 : printf("\nModule is: %d.\n",modulus(num1,num2));
		break;
		
		
		default : printf("\nEnter Valid valude!!");
	}
	
	goto restart;
	
	end:
	printf("\nfor the exit");
}

