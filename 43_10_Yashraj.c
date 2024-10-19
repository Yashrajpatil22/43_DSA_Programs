/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Array implementation of Stack
*/
#include<stdio.h>
#include<stdlib.h>

//Declaring stack
int a[5];
int top = -1;//Stack initialization condition
int n;

//Function prototypes
void push();

void  pop();

void display();

//Start of main
void main()
{

	int c;
	
	//Start of while loop
	while(1)
	{
		printf("\n***Stack Operations***");
		printf("\n1. Push element in stack");
		printf("\n2. Pop element out of stack");
		printf("\n3. Display stack");
		printf("\n4. Exit");
		
		//Accepting choice from user
		printf("\nEnter your choice:");
		scanf("%d",&c);
		
		//Start of switch case
		switch(c)
		{
		
		case 1:
			push();
			break;
			
		case 2:pop();
			break;
		
		case 3:display();
			break;
		
		case 4:exit(1);
		
		default:printf("Enter a valid choice");
		
		}//End of switch case
	}//End of while loop
}//End of main

//Start of push function
void push()
{	
	if(top==4)
	printf("Stack is FULL");
	
	else
	{
	printf("Enter element to be entered in the stack:");
	scanf("%d",&n);
	a[++top]=n;
	}
}//End of push function

//Start of pop function
void pop()
{
	if(top==-1)
	printf("Stack is EMPTY");
	
	else
	printf("\nRemoved element is %d",a[top--]);
}//End of pop function

//Start of display function
void display()
{	
	if(top==-1)
	printf("Stack is EMPTY");
	
	else
	{
		printf("Elements in the stack are\n");
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",a[i]);
		}
	}
}//End of display function


	
	

