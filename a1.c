#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n;
printf("Enter the size of array  ");
scanf("%d",&n);
p =(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
printf("Enter the numbers in an  array ");
scanf("%d",&p[i]);
}
int largest=p[0],smallest=p[0];
for(int i=0;i<n;i++)
{
if(p[i]>=largest)
largest=p[i];
if(p[i]<=smallest)
smallest=p[i];
}
printf("The smallest number is %d\n",smallest);
printf("The largest number is %d \n%d" ,largest);
free(p);
return 0;
}
