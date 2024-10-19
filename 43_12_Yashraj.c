/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Array implementation of Circular Queue
*/
#include<stdio.h>
#include<stdlib.h>

//Declaring queue
int a[5];
int front = -1;//Queue initialization condition
int rear = -1;//Queue initialization condition
int n;

//Function prototypes
void enqueue();

void  dequeue();

void display();

//Start of main
void main()
{

	int c;
	
	//Start of while loop
	while(1)
	{
		printf("\n***Circular Queue Operations***");
		printf("\n1. Enqueue element in circular queue");
		printf("\n2. Dequeue element out of circular queue");
		printf("\n3. Display queue");
		printf("\n4. Exit");
		
		//Accepting choice from user
		printf("\nEnter your choice:");
		scanf("%d",&c);
		
		//Start of switch case
		switch(c)
		{
		
		case 1:
			enqueue();
			break;
			
		case 2:dequeue();
			break;
		
		case 3:display();
			break;
		
		case 4:exit(1);
		
		default:printf("Enter a valid choice");
		
		}//End of switch case
	}//End of while loop
}//End of main

//Start of enqueue function
void enqueue()
{	
	if(front==(rear+1)%5)
		printf("Queue is FULL");

	else
	{
		if(front==-1&&rear==-1)
	{
		front = 0;
		rear = 0;
		printf("Enter element to be entered in the queue:");
		scanf("%d",&n);
		a[rear]= n;
	}	
	
		else
		{
			printf("Enter element to be entered in the queue:");
			scanf("%d",&n);
			rear=(rear+1)%5;
			a[rear]=n;
		}
	}
}//End of enqueue function

//Start of dequeue function
void dequeue()
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
}//End of dequeue function

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


