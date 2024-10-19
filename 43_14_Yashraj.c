/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Program to implement insert, delete, display, search in linked list
*/

#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
	int info;
	struct node *next;
};

struct node *list = NULL; //Linked list initialization condition

//Function prototypes
struct node* getnode();
void freenode(struct node *p);
void insertatbeg(int x);
void insertatend(int x);
void insertatloc(int x,int p);
void deleteatbeg();
void deleteatend();
void deleteatloc(int p);
void display();
void search();


//Start of main
void main()
{
 	int c;
 	int x;
 	int p;
 	
 	//Start of while loop
 	while(1)
 	{
 		printf("***Linked list operations***\n");
 		printf("1.Insert element at the beginning\n");
	 	printf("2.Insert element at the end\n");
	 	printf("3.Insert element at given location\n");
 		printf("4.Remove element from the beginning\n");
 		printf("5.Remove element from the end\n");
 		printf("6.Remove element from the given location\n");
 		printf("7.Display\n");
 		printf("8.Search an element\n");
		printf("9.Exit\n");
		
		//Accepting choice from the user
		printf("Enter your choice:");
		scanf("%d",&c);
		
		//Start of switch case
		switch(c)
		{
			case 1 :  printf("Enter value to be inserted:");
				  scanf("%d",&x);
				  insertatbeg(x);
				  break;
				  
			case 2 :  printf("Enter value to be inserted:");
				  scanf("%d",&x);
				  insertatend(x);
			  	  break;
			  	  
			case 3 :  printf("Enter value to be inserted:");
				  scanf("%d",&x);
				  printf("Enter position where value is to be inserted:");
				  scanf("%d",&p);
				  insertatloc(x,p);
				  break;
				  
			case 4 : deleteatbeg();
				  break;
				  
			case 5 : deleteatend();
				  break;
				  
			case 6 :  printf("Enter position of value which is to be deleted:");
				  scanf("%d",&p);
				  deleteatloc(p);
				  break;
				  
			case 7 : display();
				  break;
				  
			case 8 : search();
				  break;
				  
			case 9 : exit(1);
				  break;
				  
			default : printf("Enter a valid input\n");
			
		}//End of switch case
	
	}//End of while loop
	
}//End of main


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

//Start of insertatbeg function
void insertatbeg(int x)
{
	struct node *newnode;
	
	newnode = getnode();
	
	newnode -> info = x;
	
	newnode -> next = list;
	list = newnode;

}//End of insertatbeg function

//Start of insertatend function
void insertatend(int x)
{
	
	struct node *newnode,*temp;
	newnode = getnode();
	newnode -> info = x;
	newnode -> next = NULL;
	if(list ==  NULL)
	{
		printf("List is empty. Thus inserting at first location\n");
		list = newnode;
	}
	else
	{
		temp = list;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newnode;
	}
}//End of insertatend function

//Start of insertatloc function
void insertatloc(int x,int p)
{
	struct node *newnode,*temp;
	newnode = getnode();
	newnode -> info = x;
	temp = list;
	if(list == NULL)
	{
		printf("List is empty. Inserting at first location\n");
		list = newnode;
		newnode -> next = NULL;
	}
	else if(p==1)
	{
		newnode -> next = list;
		list = newnode;
	}
	else
	{
		for(int i=1;i<p-1;i++)
		{
			if(temp -> next == NULL)
			{
				printf("Insufficient elements. Inserting at last position\n");
				break;
			}
			temp = temp -> next;
		}
		newnode -> next = temp -> next;
		temp -> next = newnode;
	}
}//End of insertatloc function

//Start of deleteatbeg
void deleteatbeg()
{
	struct node *temp;
	if(list == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp = list;
		list = temp -> next;
		printf("Removing element : %d\n",temp -> info);
		freenode(temp);
	}
}//End of deleteatbeg

//Start of deleteatend
void deleteatend()
{
	struct node *temp,*ptr;
	temp = list;
	if(list == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while (temp -> next != NULL)
		{
			ptr = temp;
			temp = temp -> next;
		}
		ptr -> next = NULL;
		printf("Removing element : %d\n",temp -> info);
		freenode(temp);
	}
}//End of deleteatend

//Start of deleteatloc
void deleteatloc(int p)
{
	struct node *temp,*ptr;
	temp = list;
	if(list == NULL)
	{
		printf("List is empty\n");
	}
	else if(p==1)
	{
		list = temp -> next;
		printf("Removing element %d :" ,temp -> info);
		freenode(temp);
	}
	else 
	{
		for(int i = 1;i<p;i++)
		{	
			ptr = temp;
			if(temp -> next == NULL)
			{
				printf("Insufficient elements\n");
				break;
			}
			temp = temp -> next;
		}
		ptr -> next = temp -> next;
		printf("Removing element : %d\n",temp -> info);
		freenode(temp);
	}
}//End of deleteatloc function

//Start of display function
void display()
{
	struct node *temp;
	if(list == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp = list;
		while(temp != NULL)
		{
			printf("%d\n",temp -> info);
			temp = temp -> next;
		}
	}
}//End of display function

//Start of search function
void search()
{
	struct node *temp;
	int i = 1,n;
	printf("Enter element you want to search :");
	scanf("%d",&n);
	if(list == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp = list;
		while(temp != NULL)
		{
			
			if(temp -> info == n)
			{
				printf("%d found in the list at position %d\n",n,i);
				break;
			}
			i++;
			temp = temp -> next;
		}
	}
}//End of search function
	












