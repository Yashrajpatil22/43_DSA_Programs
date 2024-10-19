/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Program to implement selection sort
*/

#include<stdio.h>

//Function prototype
void selectionsort(int *a,int n);


//Start of main 
void main()
{
	int n;
	//Accepting number of elements in the array
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
	
	
	printf("\nUsing selection sort\n");
	selectionsort(a,n); //Calling function selectionsort
	//Printing sorted array
	printf("After sort\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} //End of main 

//Start of selectionsort function
void selectionsort(int *a,int n)
{
	int temp;
	//Start of for loop
	for(int i=0; i<n-1;i++)
	{
		//Start of for loop
		for(int j=i+1;j<n;j++)
		{
			if( a[i] > a[j])
			{
				//Swapping algorithm
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		} //End of for loop
		printf("Iteration %d : ",i+1);
		//Start of for loop
		for(int k=0; k<n; k++)
		{
			printf("%d ",a[k]); //Printing result after each iteration
		} //End of for loop
		printf("\n");
	} //End of for loop
	
} //End of selectionsort function


