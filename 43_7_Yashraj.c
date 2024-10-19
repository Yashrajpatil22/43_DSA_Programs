/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a function that compares two arrays and returns 1 if they are 
          identical and 0 otherwise 
*/
#include<stdio.h>

//Start of main
void main()
{

    //Declaring array
    int i,j,n,a[10],b[10];

    //Accepting number of elements in array
    printf("Enter number of terms in array");
    scanf("%d",&n);

    //Entering elements in array 1
    for(i=0;i<n;i++)
    {
        printf("Enter a%d",i+1);
        scanf("%d",&a[i]);
    }

    //Entering elements in array 2
    for(i=0;i<n;i++)
    {
        printf("Enter b%d",i+1);
        scanf("%d",&b[i]);
    }

    //Checking whether elements in both arrays are same or not
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            break;
        }
    }

    if(i==n)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
}//End of main



