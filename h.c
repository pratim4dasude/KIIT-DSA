#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * pi,i;
    int sn,bn;
    pi=(int *) malloc(10*sizeof(int));
    
    for(i=0;i<10;i++)
    {
        printf("enter the values: \n");
        scanf("%d",&pi[i]);
        
    }
    sn=pi[0];
    bn=pi[0];
    for(i=1;i<10;i++)
    {
        if(sn>pi[i])
         sn=pi[i];
        if(bn<pi[i])
         bn=pi[i];
    }
    printf("Smallest no.= %d \n Biggest No. = %d",sn,bn);
    
    free(pi);

    return 0;
}