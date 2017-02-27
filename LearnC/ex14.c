#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function overloading
void bouble_sort(int *alist, int max_idx);
void bouble_sort(float *alist, int max_idx);

int main(void)
{
	int idx;
	
	int int_list_b[10];
	printf("sizeof(int)=%d \n", sizeof(int));

	// setting random seed 
	time_t t;
	srand((unsigned) time(&t));
/*
	// scanf()
	char *input_str;
	scanf("%s", input_str);
*/	
/*
	// 2017-02-28
	// pointer traversing 
	float *int_list;
	int_list = (float *) malloc(sizeof(float));
	
	for(idx=0; idx<10; idx++)
	{
		// output data type is equal to divier 
		*(int_list + idx*sizeof(float) ) = rand() / (float)100; 
	}
	
	
	bouble_sort(int_list, 10);
	
	printf("After sorting: \n");

	for(idx=0; idx<10; idx++)
	{
		printf("idx=%d, int_list=%4.2f \n", idx, *(int_list + idx*sizeof(float)) );
	}
		
	*/
	int a_list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	bouble_sort(a_list, 10);
	for(idx=0; idx<10; idx++)
		printf("%d ", a_list[idx]);	
	printf("\n");
	
	return 0;
}

void bouble_sort(int *alist, int max_idx)
{
	float *alist_f = (float *) malloc(sizeof(float));
	for(int idx=0; idx<max_idx; idx++)
	{
		*(alist_f+idx*sizeof(float)) = (float) *(alist+idx);
		//printf("%4.2f ", *(alist_f+idx*sizeof(float)));
	}
	bouble_sort( alist_f, max_idx);
	
	for(int idx=0; idx<max_idx; idx++)
	{
		*(alist+idx) = (int) *(alist_f+idx*sizeof(float));
	}
}

void bouble_sort(float *alist, int max_idx)
{
	int idx, idy;
	for(int idx=0; idx<max_idx; idx++)
	{
		for(int idy=idx+1; idy<max_idx; idy++)
		{
			float num_idx = *(alist+idx*sizeof(float)); //int num_idx = alist[idx]
			float num_idy = *(alist+idy*sizeof(float)); //int num_idy = alist[idy]
			if( num_idx < num_idy)
			{
				float tmp = num_idx;
				// be careful about assigning value to pointer address
				*(alist+idx*sizeof(float)) = num_idy;
				*(alist+idy*sizeof(float)) = tmp;
			}
		}
	}
}
