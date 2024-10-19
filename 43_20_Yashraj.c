/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Implementation of Binary Search
*/

#include <stdio.h>

//Function Prototypes
int bs(int *a, int first, int last);
void sort(int *a,int first,int last);
void result(int found);

//Declaring variables
int n, x;
int found = 0;

//Start of main function
void main() { 
    
    //Accepting number of elements in the list
    printf("Enter number of elements you want to add in the list: ");
    scanf("%d", &n);
    
    //Initializing array
    int a[n];
    char ch = 'Y';
    
    //Accepting elements in the array
    printf("Enter elements in the list :\n");
    //Start of for loop
    for (int i = 0; i < n; i++) {
        printf("Enter a%d: ", i + 1);
        scanf("%d", &a[i]);
    } //End of for loop
    
    //Start of for loop
    for(int i=0; i<n; i++)
    {
    	if(a[i] > a[i+1])
    	{
    		sort(a,0,n-1); //Calling function sort
    		break;
    	}
    } //End of for loop
    
    //Start of while loop
    while(ch == 'Y' || ch == 'y')
    {
        printf("Enter the number you want to search for: ");
        scanf("%d", &x);
        found = bs(a, 0, n - 1); //Calling function bs
        result(found); //Calling function result
        printf("Do you want to search for any other number in the list?\nEnter 'Y' for Yes and 'N' for No : ");
        scanf(" %c", &ch);
        if(ch == 'N' || ch == 'n')
        {
            printf("Exiting...");
        }
    } //End of while loop
} //End of main function
    

//Start of bs function
int bs(int *a, int first, int last) {
    if (first > last) {
       return 0;
    
    }
    int mid = (first + last) / 2;
    
    if (a[mid] == x) {
        
        return 1;  
    } else if (x < a[mid]) {
        bs(a, first, mid - 1);  
    } else {
        bs(a, mid + 1, last);    
    }
} //End of bs function

    
  

//Start of sort function
void sort(int *a,int first,int last)
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
        
        sort(a,first,j-1);
        sort(a,j+1,last);
    }
    
} //End of sort function

//Start of result function
void result(int found) {
    if (found == 1) {
        printf("%d is present in the given list.\n", x);
    } else {
        printf("%d is not present in the given list.\n", x);
    }
} //End of result function

