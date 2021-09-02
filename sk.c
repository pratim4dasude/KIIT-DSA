#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,pos,ans;
    scanf("%d",&n);
    int a[n];
    ptr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int end=n-1;
    int start = 0;
   while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
     for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}