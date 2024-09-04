#include<stdio.h>

int main(void)
{
    double a,b,c,d,e,f, den, x, y;
    printf("ax + by = c \ndx + ey = f\nEnter a b c d e f:");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    den = a*e - b*d;
    if (den<0.000001 && den>-0.000001)
    {
        printf("No Solution\n");
    }
    else
    {
        x = (e*c - b*f)/den;
        y = (a*f - c*d)/den;
        printf("x = %lf y = %lf\n", x, y);
    }
    return 0;
}

