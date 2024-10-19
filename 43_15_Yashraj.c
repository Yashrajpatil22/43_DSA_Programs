/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Linked list implemantation of stack
*/

#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
	int info;
	struct node *next;
};

struct node *top = NULL; //Linked list initialization condition

//Function Prototype
struct node* getnode();
void freenode(struct node *p);
void push(int x);
void pop();
void display();

//Start of main method
void main(){

	//Declaring variables
	int c;
	int x;
	

	//Start of while loop
	while(1){
		printf("Operations\n");
		printf("1.Push element into the stack\n");
		printf("2.Pop element out of the stack\n");
		printf("3.Display stack\n");
		printf("4.Exit\n");
		
		//Accepting choice from user
		printf("Enter your choice : ");
		scanf("%d",&c);
		
		//Start of switch case
		switch(c){
			
			case 1 :  printf("Enter value to be inserted:");
				  scanf("%d",&x);
				  push(x);
				break;
				
			case 2 : pop();
				break;
				
			case 3 : display();
				break;
				
			case 4 : exit(1);
				break;
				
			default : printf("Invalid input\n");
				break;
		} //End of switch case

	} //End of while loop
	
} //End of main method

//Start of getnode function
struct node* getnode()
{
	return ((struct node*)malloc(sizeof(struct node))); //Creates a node and saves it's memory address in newnode

}//End of getnode function


//Start of freenode function
void freenode(struct node *p)
{
	free(p);
}//End of freenode fucntion

//Start of display function
void display()
{
	struct node *temp;
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		temp = top;
		while(temp != NULL)
		{
			printf("%d\n",temp -> info);
			temp = temp -> next;
		}
	}
}//End of display function

//Start of push function
void push(int x)
{
	struct node *newnode,*temp;
	newnode = getnode();
	newnode -> info = x;
	if( top == NULL)
	{
		top = newnode;
		newnode -> next = NULL;
	}
	else
	{
		temp = top;
		top = newnode;
		newnode -> next = temp;
	}
}
//End of push function

//Start of pop function
void pop(){
	struct node *temp;
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		temp = top;
		top = temp -> next;
		printf("%d popped out\n",temp->info);
		freenode(temp);
	}
}
//End of pop function	
		
