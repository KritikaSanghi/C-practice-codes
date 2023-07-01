#include <stdio.h>

int main()
{
    int q[10],b[10],w[10],t[10],avgW,avgT;
    int n,i,sum1=0,sum2=0;
    printf("Enter no. of processes: ");
    scanf("%d",&n);
    printf("\nEnter Burst time: ");
    for(i=0;i<n;i++){
        printf("%d",i);
        scanf("%d",&b[i]);
    }
w[0]=0;
    for(i=1;i<n;i++){
        w[i]=w[i-1]+b[i-1];
    }
    for(i=0;i<n;i++){
        t[i]=w[i]+b[i];
    }
for(i=0;i<n;i++){
    sum1=sum1+w[i];
    sum2=sum2+t[i];
}
avgW=sum1/n;
avgT=sum2/n;
printf("\nProcess\tBurst\tWaiting\tTurnaround\n");
for(i=0;i<n;i++){
    printf("P%d\t%d\t%d\t%d",i,b[i],w[i],t[i]);
    printf("\n");
}
printf("Avg. Waiting time is: %d",avgW);
printf("\nAvg. Turnaround time is: %d",avgT);
    return 0;
}

