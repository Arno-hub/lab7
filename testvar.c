#include <stdio.h>
#include "var.h"
int main()
{
        int n =5;
        int t[]={2,5,7,2,9};
        float var;
        variance(t,n,&var);
        printf("La variance du tableau est : %f", var) ;
        return 0;
}

