/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Linked list implementation of queue
*/

#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct node
{
    int info;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

//Function prototype
struct node* getnode();
void freenode(struct node *p);
void enqueue(int x);
void dequeue();
void display();


//Start of main method
void main()
{
    //Start of while loop
    while(1)
    {
        //Intializing variables
        int c,x;
        
        printf("Operations\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        
        //Accepting choice from user
        printf("Enter your choice : ");
        scanf("%d",&c);
        
        //Start of switch case
        switch(c)
        {
            case 1 : printf("Enter number to be inserted : ");
                scanf("%d",&x);
                enqueue(x);
                break;
                
            case 2 : dequeue();
                break;
                
            case 3 : display();
                break;
                
            case 4 : exit(0);
                break;
                
            default : printf("Invalid input\n");
                break;
        } //End of switch case
        
    } //End of while loop
    
} //End of main method

//Start of getnode function
struct node* getnode()
{
	return ((struct node*)malloc(sizeof(struct node))); 

}//End of getnode function

//Start of freenode function
void freenode(struct node *p)
{
    free(p);
} //End of freenode function

//Start of enqueue function
void enqueue(int x)
{
    struct node *newnode;
    newnode = getnode();
    newnode -> info = x;
    newnode -> next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
} //End of enqueue function

//Start of dequeue function
void dequeue()
{
    struct node * temp;
    temp = front;
    
    if(front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else {
        if(front == rear)
        {   
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front -> next;
        }
        printf("%d removed\n",temp -> info);
        freenode(temp);
    }
} //End of dequeue function

//Start of display function
void display()
{
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
    }
    else
    {
        //Start of while loop
        while(temp != NULL)
        {
            printf("%d\n",temp -> info);
            temp = temp -> next;
        } //End of while loop
    }
}
