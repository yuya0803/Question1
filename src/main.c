#include <stdio.h>
#include "../include/calc.h"

int main()
{
    int n,k,sum1;
    double sum2=1.0;

    /*toi1 (1)*/
    printf("問1 (1) n=");
    scanf("%d",&n);

    sum1=sigmakk(k,n);

    printf("問1 (1) n=%dの時=%d\n",n,sum1);

    /*   toi1 (2)    */ 
    printf("問1 (2) n=");
    scanf("%d",&n);

    sum2=sekiwa(k,n);
    printf("問1 (2) n=%dの時=%.10lf\n",n,sum2);

    return 0;


}