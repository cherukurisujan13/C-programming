#include <stdio.h>
int main()
{ 
    int n=10,m,k=5;
    printf("no.of candies needed: ");
    scanf("%d",&m);
    if(m<=k)
    {
        printf("no.of candies sold: %d\n",m);
        printf("candies left: %d",n-m);
        
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
