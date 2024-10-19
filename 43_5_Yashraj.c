/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a C program to find largest element in an array
*/
#include<stdio.h>

//Start of main
void main()
{

	//Declaring array
	int a[100],i,j,n,k;

	//Accepting number of elements in array
	printf("Enter number of elements in the array");
	scanf("%d",&n);

	//Entering elements in array
	for(i=0;i<n;i++)
	{
		printf("a%d=",i+1);
        	scanf("%d",&a[i]);
	}

	//Sorting array in descending order of numbers
    	for(i=0;i<n;i++)
    	{
        	for(j=i+1;j<n;j++)
        	{
            		if(a[i]<a[j])
            		{
             		k=a[i];
              		a[i]=a[j];
              		a[j]=k;
            		}
        	}
        
    	}

	//Printing the greatest number
   	 printf("The greatest number in the arrray is %d",a[0]);
    
}
//End of main
