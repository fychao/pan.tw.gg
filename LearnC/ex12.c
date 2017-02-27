#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int idx;
	
	int int_list_b[10];
	printf("sizeof(int)=%d", sizeof(int));

	// 2017-02-28
	// pointer traversing 
	int *int_list;
	int_list = (int *) malloc(sizeof(int));
	
	for(idx=0; idx<10; idx++)
	{
		*(int_list + idx*sizeof(int) ) = idx;
		
		printf("idx=%d, int_list=%d \n", idx, *(int_list + idx*sizeof(int)) );
	}

	return 0;
}
