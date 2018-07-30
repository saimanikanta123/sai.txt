#include<stdio.h>
int main()
{
int n,bt[10],wt[10],et[10],st[10],i;
float wavg,eavg,savg,wtot=0,etot=0,stot=0;
printf("Enter no of jobs do you have:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter burst time of process %d\t",i);
scanf("%d",&bt[i]);
}
st[1]=wt[1]=0;
et[1]=bt[1];
for(i=2;i<=n;i++)
{
st[i]=et[i-1];
et[i]=bt[i]+st[i];
wt[i]=st[i];
}
printf("NO BT ST ET WT \n");
for(i=1;i<=n;i++)
{
printf("%d %d %d %d %d \n",i,bt[i],st[i],et[i],wt[i]);
wtot=wtot+wt[i];
etot=etot+et[i];
stot=stot+st[i];
}
wavg=wtot/n;
eavg=etot/n;
savg=stot/n;
printf("The avg waiting time is: %f",wavg);
printf("\nThe avg turn around time is: %f",eavg);
printf("\nThe avg response time is: %f",savg);
printf("\n");
return 0;
}

