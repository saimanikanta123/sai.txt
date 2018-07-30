#include<stdio.h>
int main()
{
int i,ts,os,par,m,n,arr[10],div,rem,trem=0;
printf("Enter total memory size:");
scanf("%d",&ts);
printf("Enter memory for os:");
scanf("%d",&os);
m=ts-os;
printf("Enter no of partions to be divided:");
scanf("%d",&n);
div=m/n;
for(i=0;i<n;i++)
{
 printf("Enter size of Task %d :",(i+1));
 scanf("%d",&arr[i]);
}
printf("taskno tasksize internally memorystatus \n");
for(i=0;i<n;i++)
{
 if(div>arr[i])
 {
 rem=div-arr[i];
 trem=trem+rem;
 printf("%d\t%d\t%d\t Allocated\n",i+1,arr[i],rem);
 }
 else
 {
  rem=div;
  trem=trem+rem;
   printf("%d\t%d\t%d\t Not Allocated\n",i+1,arr[i],rem);
 }
}
printf("Total Internal fragnantation is :%d\n",trem);
}

