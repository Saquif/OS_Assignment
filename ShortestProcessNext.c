#include<stdio.h>

int main()
{
    int time_quantum,process_num,i,j;
    float alpha,ready_Q[100],blocked_Q[100];

    printf("Enter the value of alpha: ");
    scanf("%d",&alpha);

    printf("\nEnter the value of time_quantum: ");
    scanf("%d",&time_quantum);

    printf("\nEnter how many processes running: ");
    scanf("%d",&process_num);

    float processes[process_num];
    int cpu_burst[process_num],arrival_time[process_num];

    printf("\nEnter The CPU BURST respectively: ");
    for(i=0;i<process_num;i++)
    {
        scanf("%d",&cpu_Burst[i]);
    }
    printf("\nEnter the arrival time respectively: ");
    for(i=0;i<process_num;i++)
    {
        scanf("%d",&arrival_time[i]);
    }

  //this updated by Saquif












    return 0;
}
