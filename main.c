#include <stdio.h>
#include <stdlib.h>


int main()
{
    int choice,a[3][3],b[3][3],c[3][3],temp,i,j;
    printf("1.addition of matrices\n2.substraction of two matrices\n3.finding upper and lower triangular matrices\n4.transpose of matrix\n5.product of matrices\nenter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 1: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 2: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",b[i][j]);
            }
            printf("\n");
        }

        printf("\nthe sum of the matrix is:\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                c[i][j]=a[i][j] + b[i][j];
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
    else if(choice==2)
    {
                for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 1: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 2: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",b[i][j]);
            }
            printf("\n");
        }

        printf("\nthe diffrence of the matrix is:\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                c[i][j]=a[i][j] - b[i][j];
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
    else if(choice==3)
    {
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 1: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }

        printf("the upper triangular matrix: \n");
        for(i=0;i<3;i++)
        {
            for(int k=0; k<i; k++)
                printf("   ");
            for(j=0; j<3-i; j++)
                printf("%d  ",a[i][j+i]);
            printf("\n");
        }

        printf("the lower triangular matrix: \n");
        for(i=1;i<=3;i++)
        {
            for(j=1; j<=i; j++)
                printf("%d  ",a[i-1][j-1]);
            printf("\n");
        }
    }
    else if(choice==4)
    {
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 1: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }

        printf("\ntranspose of the matrix is: \n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",a[j][i]);
            }
            printf("\n");
        }
    }
    else if(choice==5)
    {
                for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 1: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\nenter element [%d][%d] of matrix 2: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d  ",b[i][j]);
            }
            printf("\n");
        }

        printf("\nthe product of the matrix is:\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                c[i][j]=a[i][j] * b[i][j];
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nyou entered wrong choice");
    return 0;
}
