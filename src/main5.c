#include <stdio.h>
#include "../include/calc5.h"

int main()
{
    int m,n;
    double sum1=1.0, a=1.0;
    double sum2=0.0;

    /*toi5 (1)*/
    printf("問5 (1) 大きいnの値=");
    scanf("%d",&n);

    sum1=toi51(m,n);

    printf("n=%dの時=%lf\n",n,sum1);

    /*toi5 (2)*/
    printf("問5 (2) 大きいnの値=");
    scanf("%d",&n);

    sum2=toi52(m,n);

    printf("n=%dの時=%lf\n",n,sum2);

    return 0;


}