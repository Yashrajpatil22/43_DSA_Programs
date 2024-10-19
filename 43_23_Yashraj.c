/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Program to implement merge sort
*/

#include<stdio.h>

//Function prototype
void partition(int *a,int low,int high);
void mergesort(int *a,int low,int high,int mid);

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
	
	printf("\nUsing merge sort\n");
	partition(a,0,n-1); //Calling function mergesort
	
	//Printing sorted array
	printf("After sort\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} //End of main 

//Start of partition function
void partition(int *a,int low,int high)
{
    int mid = 0;
    if(low<high){
        mid = (low+high)/2;
        partition(a,low,mid);
        partition(a,mid+1,high);
        mergesort(a,low,high,mid);
    }
} //End of partition function

//Start of mergesort function
void mergesort(int *a,int low,int high,int mid)
{
    //Declaring variables and intializing array
    int i,k,l,m,temp[n];
    l = low;
    i = low;
    m = mid+1;
    
    //Start of while loop
    while(l<=mid && m<=high)
    {
        if(a[l]<a[m])
        {
            temp[i]=a[l];
            l++;
            i++;
        }
        else
        {
            temp[i]=a[m];
            m++;
            i++;
        }
    } //End of while loop
    if(l>mid)
    {
        //Start of for loop
        for(k=m;k<=high;k++)
        {
            temp[i]=a[k];
            i++;
        } //End of for loop
    }
    else
    {
        //Start of for loop
        for(k=l;k<=mid;k++)
        {
            temp[i]=a[k];
            i++;
        } //End of for loop
    }
    printf("List after the current merge : "); 
    //Start of for loop
    for(k=low;k<=high;k++)
    {
        printf("%d ",temp[k]);
    } //End of for loop
    printf("\n");
    
    //Start of for loop
    for(k=low;k<=high;k++)
    {
        a[k]=temp[k];
    } //End of for loop
    
} //End of mergesort function
