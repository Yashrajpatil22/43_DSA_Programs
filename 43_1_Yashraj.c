/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a C program to check if a given number is a part of Fibonacci 
		  number series
*/
#include<stdio.h>

//Start of main
void main()
{
	int n,i,a,b,c,k; 

	//Accepting number from user
	printf("Enter number you want to check");
	scanf("%d",&n);
	a=0;b=1;

	//Checking if the number is present in fibonacci series
	for(i=1;i<=n+2;i++)
	{

		if(n==a)
		{
			printf("\nEntered number is present in the fibonacci series");
			break;
		}

		c=a+b;
		a=b;
		b=c;
	}
	if(a!=n)
		printf("\nEntered number is not present in the fibonacci series");


}
//End of main

