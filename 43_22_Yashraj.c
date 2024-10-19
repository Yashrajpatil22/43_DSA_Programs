/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Program to implement insertion sort
*/

#include<stdio.h>

//Function prototype
void insertionsort(int *a,int n);

//Start of main 
void main()
{
	int n;
	
	//Accepting number of elements in the array from user
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	
	//Intializing array
	int a[n];
	
	//Accepting elements in the array
	printf("Enter elements in the array\n");
	for(int i =0; i<n; i++)
	{
		printf("a%d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nUsing insertion sort\n");
	insertionsort(a,n); //Calling function insertionsort
	
	//Printing sorted array
	printf("After sort\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} //End of main 

//Start of function insertionsort
void insertionsort(int *a,int n)
{
	//Declaring variables
	int i,j,k,temp;
	
	//Start of for loop
	for(i=0;i<n-1;i++)
	{
		k=i;
		j = i+1;
		temp = a[j];
		
		//Start of while loop
		while(a[i]>temp && i>=0)
		{				
			a[i+1] = a[i];
			i--;
		} //End of while loop
		a[i+1] = temp;
		i=k;
		printf("Iteration %d : ",k+1); //Printing result after each iteration
		
		//Start of for loop
		for(k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		} //End of for loop
		printf("\n");
		
	} //End of for loop
	
} //End of function insertionsort
