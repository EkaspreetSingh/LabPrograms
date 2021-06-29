#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("1.To find the length of the string\n2.To concatenate two strings\n3.To find reverse of a string\n4.To copy one string to another string\n  choose your option: ");
    int option;
    scanf("%d",&option);
    char a[20],b[20];
    gets(a);
    if(option==1)
    {
        printf("\nEnter string: ");
        gets(a);
        printf("%d is the length of the string",strlen(a));
    }
    if(option==2)
    {
        int j=0;
        printf("\nEnter two strings: ");
        gets(a);
        gets(b);
        for(int i=strlen(a) ; i<strlen(a)+strlen(b); i++,j++)
        {
            a[i]=b[j];
        }
        printf("%s",a);
    }
    if(option==3)
    {
        printf("\nEnter string: ");
        gets(a);
        for(int i=0; i<strlen(a); i++)
        {
            b[strlen(a)-i]=a[i];
        }
                printf("%s",b);
    }
    return 0;
}
