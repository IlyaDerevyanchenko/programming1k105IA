#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double arr[20];

    double* p = arr;
    double  neg = 0;

    while(scanf("%lf", p++)){}
    (p-1) = NAN;

    for (p=arr; !isnan(p);++p){
        if(*p<0){
            neg+=1;

        }
    printf ("Result:%.2f\n", *p);
    }
     printf ("Neg:%.2f\n", neg);
    return 0;
}
