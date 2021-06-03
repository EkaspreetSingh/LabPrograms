#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long fact=1;
    printf("enter any number");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("factorial of %d=%d",n,fact);
    printf("\n\n\n\n\n");
    return 0;
}
