/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Write a C program to roll_no, name , percentange of 5 students using 
		  array of structure and display the records in ascending order of roll 
		  list
*/
#include<stdio.h>

//Declaring structure
struct stud
{
	int roll;
	char name[10];
	float per;
}s[5];

//Start of main
void main()
{
	int i,j;
	struct stud m;

	//Accepting data from user
	for(i=0;i<5;i++)
	{
		printf("Enter roll no. for stud %d ",i+1);
		scanf("%d",&s[i].roll);
		printf("Enter name of stud %d ",i+1);
		scanf("%s",s[i].name);
		printf("Enter percentage of stud %d ",i+1);
		scanf("%f",&s[i].per);
	}

	//Sorting data in ascending order of roll number
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(s[j].roll>s[j+1].roll)
			{
				m=s[j];
				s[j]=s[j+1];
				s[j+1]=m;
			}
		}
	}

	//Printing data in ascending order of roll number
	printf("ROLL NO.\tNAME\tPERCENTAGE\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t\t%s\t%f\n",s[i].roll,s[i].name,s[i].per);
	}
}
//End of main
