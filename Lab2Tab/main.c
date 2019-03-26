#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f1(double);
double f2(double, double);

int main()
{
    double a = -6, b = 6, h = 0.15;

    printf("*************** Part 1 ***************\n");

    printf("x:\t");
    for (double x = a; x <= b; x += h) {
        char c = x + h < b ? '\t' : '\n';
        printf("%.3f%c", x, c);
    }

    printf("y:\t");
    for (double x = a; x <= b; x += h) {
        char c = x + h < b ? '\t' : '\n';
        printf("%.3f%c", f1(x), c);
    }

    printf("**************************************\n");

    printf("*************** Part 2 ***************\n");

    double a1=0, b1 = 5, h1 = 0.1;
    double c1=2, d1 = 6, h2 = 0.12;
    printf("y\\x\t");
    for (double x = a1; x <= b1; x += h1) {
        char c = x + h1 < b1 ? '\t' : '\n';
        printf("%.3f%c", x, c);
    }

    for (double y = c1; y <= d1; y += h2) {
        printf("%.3f\t", y);
        for (double x = a1; x <= b1; x += h1) {
            char c = x + h1 < b1 ? '\t' : '\n';
            printf("%.3f%c", f2(x, y), c);
        }
    }

    printf("**************************************\n");
    return 0;
}

double f1(double x) {
    if (x <= -4.0) {
        return sqrt(x*x-4);
    } else {
        if (x > -4.0 && x <= 4.0) {
            return fabs(x+1);
        } else {
            return -(sqrt(x*x-4));
        }
    }
}

double f2(double x, double y) {
    return (sqrt(x*y))*(x+y);
}
