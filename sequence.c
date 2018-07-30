#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,s,flag[10],file[10],i,j;
printf("Enter no of files:");
scanf("%d",&n);
printf("Enter no of blocks for each file\n");
for(i=0;i<n;i++)
{
 printf("file %d:",(i+1));
 scanf("%d",&file[i]);
}
for(i=0;i<n;i++)
{
  s=rnum();
  printf("file %d:",(i+1));
  for(j=0;j<file[i];j++)
  {
    printf("%d\t",s);
    s++;
    flag[s]=1;
  }
  printf("\n");
 }
return 0;
}
int rnum()
{
int i,k,flag[10];
for(i=0;i<100;i++)
{
 k=rand()%100;
 if(flag[k]!=1)
 {
   break;
 }
}
return k;
}
 
