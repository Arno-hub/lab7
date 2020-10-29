#include <stdio.h>
#include "min.h"
int main()
{
	int n =5; 
	int t[]={2,5,7,2,9};
	int val_min; 
	min(t,n,&val_min);
	printf("La valeur maximale présente dans le tableau est : %d", val_min) ;
	return 0;
}
