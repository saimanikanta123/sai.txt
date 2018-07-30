#include<stdio.h>
int main()
{
int i,ts,os,n,arr[10];
printf("Enter total memory size:");
scanf("%d",&ts);
printf("Enter memory for os:");
scanf("%d",&os);
ts=ts-os;
printf("Enter no. of tasks:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("Enter size of task%d :",(i+1));
 scanf("%d",&arr[i]);
}
printf("taskno tasksize memorystatus \n");
for(i=0;i<n;i++)
{
 if(ts>=arr[i])
 {
 ts=ts-arr[i];
 printf("%d\t%d\t Allocated\n",i+1,arr[i]);
 }
 else
 {
   printf("%d\t%d\t Not Allocated\n",i+1,arr[i]);
 }
}
printf("External fragnantation is :%d\n",ts);
}

