/*
Name- Yashraj Shamrao Patil
Roll no.- 43
Batch - B
Program - Define a structure data type called time_struct containing 3 members 
          int hour, int minute and int second. Write functions that accept the 
          structure to perform the following operations:
          1. Input new time
          2. Display the time
          3. Update the time such that the function accepts the time_struct and 
          increments the time by one second.(If the increment results in 60 seconds,
          the then second member is set to 0 and the minute is incremented by 1. Then,
          if the result is 60 minutes, the minute member is set to 0 and the hour 
          member is incremented by 1. Finally when the hour becomes 24, it is set to 
          zero.)
*/
#include<stdio.h>

//Declaring structure
struct time{
    int hr;
    int min;
    int sec;
}t1,t2;

//Start of main
    void main(){

    //Setting default time
    t1.sec = 34;
    t1.min=54;
    t1.hr=12;
    int i,j,k;
    printf("Enter your choice enter time(1),view time (2),update time(3)");
    scanf("%d",&k);

    //Start of switch case
    switch(k){
        case 1 :
        {   //Accepting time from user
            printf("Enter hours");
            scanf("%d",&t1.hr);
            printf("Enter minutes");
            scanf("%d",&t1.min);
            printf("Enter seconds");
            scanf("%d",&t1.sec);
            if(t1.hr>=24||t1.min>=60||t1.sec>=60)
                printf("Entered time is invalid\n");
            break;
        }

        case 2 :
        {   //Displaying default time
            printf("Time is %dhr %dmin %dsec\n",t1.hr,t1.min,t1.sec);
            break;
        }

        case 3:
        {   //Accepting time from user to update
            printf("Enter \n");
            printf("Enter hours");
            scanf("%d",&t2.hr);
            printf("Enter minutes");
            scanf("%d",&t2.min);
            printf("Enter seconds");
            scanf("%d",&t2.sec);

            //Updating default time
            t1.sec = t2.sec + t1.sec;
            if(t1.sec>=60)
            {
                t1.sec = t1.sec - 60;
                t1.min++;
            }
            t1.min = t2.min + t1.min;
            if(t1.min>=60)
            {
                t1.min = t1.min - 60;
                t1.hr++;
            }
            t1.hr = t2.hr + t1.hr;
            if(t1.hr>=24)
            {
                t1.hr= t1.hr - 24;
            }

            //Displaying updated time
            printf("Updated time is %dhr %dmin %dsec",t1.hr,t1.min,t1.sec);
            break;
        }
    }//End of switch case
}//End of main


