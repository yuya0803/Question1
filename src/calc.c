#include <stdio.h>
#include "../include/calc.h"

int sigmakk(int k, int n)
{
    int sum1=0;

    for(k=1;k<=n;k++)
    {
        sum1=sum1+k*k;
    }

    return sum1;
}

double sekiwa(int k, int n)
{
    double sum2=1.0;

    for(k=1;k<=n;k++)
    {
        sum2=sum2*1/(k*k);
    }

    return sum2;
}

int nkaijo(int k,int n)
{
    int fact=1;

    for(k=1;k<=n;k++)
    {
        fact=fact*k;
    }

    return fact;
}