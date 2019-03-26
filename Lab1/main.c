#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, x;
    printf("Enter a, b, x: ");
    scanf("%lf %lf %lf", &a, &b, &x);

    double result;

    result = pow(x,3.4)*exp(cos(a*x)+b);
    printf("Result :%.5f",result);

    return 0;

}
