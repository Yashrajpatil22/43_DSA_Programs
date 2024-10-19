/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a program in C to count the total number of duplicate elements in 
          an array
*/
#include<stdio.h>

//Start of main
void main()
{
    //Declaration of array
    int i,j,n,a[10];

    //Accepting number of elements in array
    printf("Enter number of terms in the array");
    scanf("%d",&n);

    //Accepting elements in array
    for(i=0;i<n;i++)
    {
        printf("a%d ",i+1);
        scanf("%d",&a[i]);
    }
    int c=0;

    //Checking duplicate elements in array
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }

    //Printing number of duplicate elements in array
    printf("Number of duplicate elements in the array is %d",c);
}
