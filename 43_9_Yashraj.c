/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a program in C to print all unique elements in 
		  an array
*/
#include<stdio.h>
//Start of main
void main()
{
	int i,j,n,c=0;

	//Accepting size of array
	printf("Enter number of elements");
	scanf("%d",&n);

	//Declaring array
	int a[n];

	//Accepting elements in array
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	//Displaying unique elements in the array
	printf("Unique elements in the array are:\n");
	printf("%d\n",a[0]);

	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				c++;
		}

		if(c==0)
			printf("%d\n",a[i]);
		c=0;
	}
}
//End of main


