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