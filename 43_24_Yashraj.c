/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Program to implement quick sort
*/

#include<stdio.h>

//Function prototype
void quicksort(int *a,int first,int last);

//Declaring variable to store number of elements in the array
int n;

//Start of main 
void main()
{
	
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
	
	printf("\nUsing quick sort\n");
	quicksort(a,0,n-1); //Calling function quicksort
	
	//Printing sorted array
	printf("After sort\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} //End of main 

//Start of quicksort function
void quicksort(int *a,int first,int last)
{
    //Declaring variables
    int i,j,pivot,temp;
    
    pivot = first;
    i = first;
    j = last;
    
    if(first<last)
    {
        //Start of while loop
        while(i<j)
        {
            //Start of while loop
            while(a[pivot]>=a[i] && i<last)
                i++; 
            //End of while loop
            
            //Start of while loop
            while(a[pivot]<a[j])
                j--;
             //End of while loop
             
            if(i<j)
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } //End of while loop
        
        temp = a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
    
} //End of quicksort function
