#include <stdio.h>
#include <stdlib.h>

int func(int a, int b)
{
    int temp;
    temp=a+b;
    printf("%d ",temp);
    if(temp<55)
        return func(b,temp);
}

int main()
{
    int a=0;
    int b=1;
    printf("%d %d ",a,b);
    func(a,b);
    return 0;
}
