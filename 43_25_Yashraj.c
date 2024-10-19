/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program -  Program to implement DFS
*/


#include<stdio.h>
#include<stdlib.h>

//Intializing arrays
int visited[20];
int graph[20][20];
int stack[20];
int top = -1; //Stack initialization condition

//Function prototype
void dfs(int a,int n);
void push(int x);
int pop();

//Start of main function
void main()
{
    //Declaring variables
    int i,j,a,n;
    
    //Accepting number of elements in array
    printf("Enter number of vertices : ");
    scanf("%d",&n);
    
    //Start of for loop
    for(i = 1;i<=n;i++)
    {
        //Start of for loop
        for(j = 1;j<=n;j++)
        {
            printf("Enter 1 if %d has an edge with %d else 0",i,j);
            scanf("%d",&graph[i][j]);
        } //End of for loop
    } //End of for loop
    printf("The Adjacency Matrix is \n");
    
    //Start of for loop
    for(i = 1;i<=n;i++)
    {
        //Start of for loop
        for(j = 1;j<=n;j++)
        {
            printf("%d ",graph[i][j]);
        } //End of for loop
        printf("\n");
    } //End of for loop
    
    //Start of for loop
    for(i=1;i<=n;i++)
    {
        visited[i]= 0;
    } //End of for loop
    
    //Accepting source vertex
    printf("Enter the source vertex : ");
    scanf("%d",&a);
        
        dfs(a,n); //Calling dfs function
    
} //End of main function

//Start of dfs function
void dfs(int a,int n)
{
    int i,k;
    push(a);
    visited[a]=1;
    k=pop();
    
    if(k!=0)
    {
        printf("%d",k);
        
    }
    while(k!=0)
    {
        for(i=1;i<=n;i++)
        if((graph[k][i] != 0) && (visited[i] == 0))
        {
            push(i);
            visited[i]=1;
        }
        k=pop();
        
        if(k!=0)
        {
            printf("%d",k);
        }
    }    
        for(i=1;i<=n;i++)
        if(visited[i] == 0)
        dfs(i,n); //Calling function dfs (recursively)
    
} //End of dfs function

//Start of push function
void push(int x)
{
    if(top == 19)
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top] = x;
    }
} //End of push function

//Start of pop function
int pop()
{
    int k;
    if(top == -1)
    {
        return 0;
    }
    else
    {
        k = stack[top--];
        return k;
    }
} //End of pop function