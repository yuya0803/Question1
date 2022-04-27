#include <stdio.h>
#include "../include/calc5.h"

double toi51(int m,int n)
{
    double sum1=1.0, a=1.0;

    for(m=1;m<=n;m++)
    {
        a*=-1.0;
        sum1=sum1+a/m;
    }

    return sum1;
}

double toi52(int m, int n)
{
    double sum2=0.0, a=-1.0;

    for(m=0;m<=n;m++)
    {
        a*=-1.0;
        sum2=sum2+a/(2*m+1);
    }

    return sum2;
}