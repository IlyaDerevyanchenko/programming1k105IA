#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double arr[20];

    int neg = 0;

    int i = 0;

    while (scanf("%lf", &arr[i++])){};
    arr [i-1] = NAN;

    for (i=0; !isnan(arr[i]);++i){
        if (arr[i]<0)
        {
         ++neg;
             printf("Negative: %.2f\n", arr[i]);
        }
         else{
            printf("Positive: %.2f\n", arr[i]);}
        }

    printf("kol-wo otricatelnyh: %.d\n", neg);
       return 0;
}
