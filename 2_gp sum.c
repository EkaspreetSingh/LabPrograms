#include <stdio.h>
#include <math.h>
int main() {
    double a,r,n, sum;

    printf("\nInput first number of your Geometric series: ");
    scanf("%lf", &a);
    printf("\nInput common ratio of your Geometric series: ");
    scanf("%lf", &r);
    printf("\nInput number of terms of your Geometric series: ");
    scanf("%lf", &n);

    sum= (a*(pow(r,n)-1))/(r-1);
    printf("\nSum of the G.P.: %f",sum);


    return 0;
}
