#include <stdio.h>
#include "max.h"
int main()
{
	int n =5; 
	int t[]={2,5,7,2,9};
	int val_max; 
	max(t,n,&val_max);
	printf("La valeur maximale présente dans le tableau est : %d", val_max) ;
	return 0;
}
