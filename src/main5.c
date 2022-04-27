#include <stdio.h>
#include "../include/calc5.h"

int main()
{
    int m,n;
    double sum1=1.0, a=1.0;

    /*toi5 (1)*/
    printf("大きいnの値=");
    scanf("%d",&n);

    sum1=toi51(m,n);

    printf("n=%dの時=%lf\n",n,sum1);

    return 0;


}