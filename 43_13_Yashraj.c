/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Array implementation of Double ended queue
*/
#include<stdio.h>
#include<stdlib.h>

//Declaring queue
int a[5];
int front = -1;//Queue initialization condition
int rear = -1;//Queue initialization condition
int n;

//Function prototypes
void enqueueatrear();

void enqueueatfront();

void  dequeueatfront();

void dequeueatrear();

void display();

//Start of main
void main()
{

	int c;
	
	//Start of while loop
	while(1)
	{
		printf("\n***Double Ended Queue Operations***");
		printf("\n1. Enqueue element at rear end in queue");
		printf("\n2. Enqueue element at front end in queue");
		printf("\n3. Dequeue element from front end of queue");
		printf("\n4. Dequeue element from rear end of queue");
		printf("\n5. Display queue");
		printf("\n6. Exit");
		
		//Accepting choice from user
		printf("\nEnter your choice:");
		scanf("%d",&c);
		
		//Start of switch case
		switch(c)
		{
		
		case 1:enqueueatrear();
			break;
			
		case 2:enqueueatfront();
			break;
		
		case 3:dequeueatfront();
			break;
			
		case 4:dequeueatrear();
			break;
		case 5:display();
			break;
			
		case 6:exit(1);
		
		default:printf("Enter a valid choice");
		
		}//End of switch case
	}//End of while loop
}//End of main

//Start of enqueueatrear function
void enqueueatrear()
{	
	if(front==(rear+1)%5)
		printf("Queue is FULL");

	else
	{
		if(front==-1&&rear==-1)
	{
		front = 0;
		rear = 0;
	}	
	
		else
		{
			rear=(rear+1)%5;
		}
		printf("Enter element to be entered in the queue:");
		scanf("%d",&n);
		a[rear]=n;
		
	}
}//End of enqueueatrear function

//Start of enqueueatfront function
void enqueueatfront()
{
	if(front==(rear+1)%5)
	{
		printf("Queue is full");
	}
	
	else
	{
		if(front==-1 && rear==-1)
		{
			front = 0;
			rear = 0;
		}
		else
		{
			front = (5 + front - 1)%5;
		}
		printf("Enter element to be added");
		scanf("%d",&n);
		a[front]=n;
	}
}//End of enqueueatfront function

//Start of dequeueatfront function
void dequeueatfront()
{
	if(front==-1&&rear==-1)
		printf("Queue is EMPTY");
	
	
	else
	{
		if(front==rear)
		{
			printf("Removed element is %d",a[front]);
			front = -1;
			rear = -1;
		}
	
		else
		{
		    printf("\nRemoved element is %d",a[front]);
		    front=(front+1)%5;
			
		}
	}
}//End of dequeueatfront function

//Start of dequeueatrear function
void dequeueatrear()
{
	if(front==-1&&rear==-1)
		printf("Queue is EMPTY");
	
	
	else
	{
		if(front==rear)
		{
			printf("Removed element is %d",a[front]);
			front = -1;
			rear = -1;
		}
		else
		{
			printf("Removed element is %d",a[rear]);
			rear=(5 + rear - 1) % 5 ;
		}
	}
}//End of dequeueatrear function


//Start of display function
void display()
{	
	if(front==-1&&rear==-1)
	printf("Queue is EMPTY");
	
	else
	{
		printf("Elements in the Queue are\n");
	    
	    int i = front-1;
	    do
	    {
	       i=(i+1)%5;
	        printf("%d\n",a[i]);
	        
	    }while(i!=rear);
	}
}//End of display function


