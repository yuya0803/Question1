#include <stdio.h>
#include "calc.h"

int sigmakk(int k, int n)
{
    int sum1=0;

    for(k=1;k<=n;k++)
    {
        sum1=sum1+k*k;
    }

    return sum1;
}

int calc2(int k,int n)
{
    double sum2=0;

    for(k=1;k<=n;k++)
    {
        sum2=sum2+1/(k*k):
    }

    return sum2;
}