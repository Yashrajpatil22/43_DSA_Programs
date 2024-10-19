/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a C program to generate Pascal Triangle using array
*/
#include<stdio.h>

//Start of main
void main()
{
    int i,j,k,n,a,r[10][10];
    n=1;

	//Accepting number of rows
    	printf("Enter number of rows");
   	scanf("%d",&a);


    	for(i=0;i<a;i++)
    	{
        	r[i][a-1]=1;
        	r[i][a-1-i]=1;
    	}
    	for(i=2;i<a;i++)
    	{
        	for(j=1;j<i;j++)
        	{
            		r[i][a-1-j]=r[i-1][a-1-j]+r[i-1][a-j];
        	}
    	}

	//Printing pascal triangle
    	for(i=0;i<a;i++)
    	{
        	for(k=a-i;k>1;k--)
        	{
            		printf(" ");
        	}
        	for(j=a-i;j<=a;j++)
        	{
            		printf("%d ",r[i][j-1]);
        	}
        	printf("\n");
    	}
}
//End of main
