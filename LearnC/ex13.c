#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bouble_sort(int *alist, int max_idx);

int main(void)
{
	int idx;
	
	int int_list_b[10];
	printf("sizeof(int)=%d \n", sizeof(int));

	time_t t;
	srand((unsigned) time(&t));
/*
	// scanf()
	char *input_str;
	scanf("%s", input_str);
*/	
	// 2017-02-28
	// pointer traversing 
	int *int_list;
	int_list = (int *) malloc(sizeof(int));
	
	for(idx=0; idx<10; idx++)
	{
		*(int_list + idx*sizeof(int) ) = rand() % 100;
	}

	bouble_sort(int_list, 10);
	
	printf("After sorting: \n");
	
	for(idx=0; idx<10; idx++)
	{
		printf("idx=%d, int_list=%d \n", idx, *(int_list + idx*sizeof(int)) );
	}
	

	return 0;
}

void bouble_sort(int *alist, int max_idx)
{
	int idx, idy;
	for(int idx=0; idx<max_idx; idx++)
	{
		for(int idy=idx+1; idy<max_idx; idy++)
		{
			int num_idx = *(alist+idx*sizeof(int)); //int num_idx = alist[idx]
			int num_idy = *(alist+idy*sizeof(int)); //int num_idy = alist[idy]
			if( num_idx < num_idy)
			{
				int tmp = num_idx;
				// be careful about assigning value to pointer address
				*(alist+idx*sizeof(int)) = num_idy;
				*(alist+idy*sizeof(int)) = tmp;
			}
		}
	}
}
