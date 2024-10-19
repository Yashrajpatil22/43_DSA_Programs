/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Implementation of operations (insetion,Search,counting of nodes, count of leaf nodes etc.) in a
		  binary search tree
*/

#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct bt
{
	int info;
	struct bt *left;
	struct bt *right;
};

struct bt *root = NULL; //Binary search tree initialization condition
struct bt *newnode;


int n = 0; // Counter for number of nodes
int nl = 0;//Counter for number of leaf nodes

//Function Prototype
struct bt* getnode();
void insert(struct bt *r,int x);
void inorder(struct bt *r);
void preorder(struct bt *r);
void postorder(struct bt *r);
int search(struct bt *r,int x);
void countnodes(struct bt *r);
void countleafnodes(struct bt *r);

//Start of main method
void main(){

	//Initializing variables
	int c,x;

	//Start of while loop
	while(1){
		printf("Operations\n");
		printf("1.Insert\n");
		printf("2.Inorder\n");
		printf("3.Preorder\n");
		printf("4.Postorder\n");
		printf("5.Search\n");
		printf("6.Count number of nodes\n");
		printf("7.Count number of leaf nodes\n");
		printf("8.Exit\n");
		
		//Accepting choice from user
		printf("Enter your choice : ");
		scanf("%d",&c);
		
		//Start of switch case
		switch(c)
		{
			case 1 : printf("Enter element to be inserted : ");
				scanf("%d",&x);
				if(root == NULL)
				{
					newnode = getnode();
					newnode -> info = x;
					newnode -> left = NULL;
					newnode -> right = NULL;
					root = newnode;
				}
				else 
					insert(root,x);
				break;
				
			case 2 : inorder(root);
				break;
				
			case 3 : preorder(root);
				break;
				
			case 4 : postorder(root);
				break;
				
			case 5 : printf("Enter element that you want to search : ");
				scanf("%d",&x);
				search(root,x);
				break;
				
			case 6 : countnodes(root);
			    printf("There are %d nodes\n",n);
			    n = 0;
			    break;
			    
			case 7 : countleafnodes(root);
			    printf("There are %d leaf nodes\n",nl);
			    nl = 0;
			    break;
				
			case 8 : exit(1);
				break;
				
			default : printf("Invalid input\n");
				break;
		} //End of switch case

	} //End of while loop

} //End of main method

//Start of getnode function
struct bt* getnode()
{
	return ((struct bt*)malloc(sizeof(struct bt))); 

}//End of getnode function

//Start of insert method
void insert(struct bt *r,int x)
{
	if(x == r->info)
	{
		printf("Duplicate entries\n");
	}
	else if(x < r->info)
	{
		if(r->left == NULL)
		{
			newnode = getnode();
			newnode ->info = x;
			newnode -> left = NULL;
			newnode -> right = NULL;
			r->left = newnode;
		}
		else
		{
			insert(r->left,x);
		}
	}
	else if(x > r->info)
	{
		if(r->right == NULL)
		{
			newnode = getnode();
			newnode -> info = x;
			newnode -> left = NULL;
			newnode -> right = NULL;
			r->right = newnode;
		}
		else
		{
			insert(r->right,x);
		}
	}
} //End of insert method

//Start of inorder method
void inorder(struct bt *r)
{
	if(r !=NULL )
	{
		inorder(r->left);
		printf("%d\n",r->info);
		inorder(r->right);
	}
} //End of inorder method

//Start of preorder method
void preorder(struct bt *r)
{
	if(r != NULL)
	{
		printf("%d\n",r->info);
		preorder(r->left);
		preorder(r->right);
	}
} //End of preorder method

//Start of postorder method
void postorder(struct bt *r)
{
	if(r != NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("%d\n",r->info);
	}
} //End of postorder method

//Start of search method
int search(struct bt *r,int x)
{
	int f = 0;
	if(r!=NULL)
	{
		if( x == r->info)
		{
			printf("%d found\n",r->info);
			return 1;
		}
		else if( x < r->info)
		{
		
			f=search(r->left,x);
			return f;
		
		}
		else if(x > r->info)
		{
			f=search(r->right,x);
			return f;
		
		}
	}
	if(f==0)
	{
		printf("Element not found\n");
	}
	
} //End of search method

//Start of countnodes method
void countnodes(struct bt *r){
    if(r != NULL)
    {
        n++;
        countnodes(r -> left);
        countnodes(r -> right);
    }
} //End of countnodes function

//Start of countleafnodes function
void countleafnodes(struct bt *r)
{
    if(r != NULL)
    {
        if(r -> left == NULL && r -> right == NULL)
        {
            nl++;
        }
        countleafnodes(r -> left);
        countleafnodes(r -> right);
    }
} //End of countleafnodes function

