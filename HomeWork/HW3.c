#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Function: Check the number match the condition or not.
int CheckNum(int num);
//Function: Check the answer that user input and return nAnB.
//int CheckAns(int answer, int input);
//Function: Bubble Sort.
void BubbleSort(int *alist, int max_idx);
//Functoin: Binary Search.!!!!!not done!!!
//int BinarySearch(int);

int main(void)
{
	// setting random seed
	int idx;
	 
	time_t t;
	srand((unsigned) time(&t));
	
	int *int_list;
	int_list=(int *)malloc(sizeof(int));
	
	for(idx=0;idx<10;idx++)
	{

		//while (int returned_CheckNum)
		
		*(int_list+idx*sizeof(int))=rand()%100;
		printf("int_list=%d\n",*(int_list+idx*sizeof(int))) ;
		int returned_CheckNum= CheckNum(*(int_list+idx*sizeof(int)));
		printf("%d\n",returned_CheckNum);
	}
	
	BubbleSort(int_list, 10);
	
	printf("After Sorting:\n");
	
	for(idx=0;idx<10;idx++)
	{
		printf("idx=%d, int_list=%d\n",idx,*(int_list+idx*sizeof(int)));
	}
	
	
	
	
	
	return 0;
}

int CheckNum(int num)
{
	int a,b,c,d;
	int e,f,g,h;
	
	a=num;
	b=num%1000;
	c=num%100;
	d=num%10;
	
	e=d;//個位 
	f=(c-d)/10;//十位 
	g=(b-c)/100;//百位 
	h=(a-b)/1000;//千位 
	
	if(e!=f && e!=g && e!=h && f!=g && f!=h && g!=h) 
	    return 1;
	else
	    return 0;
}

void BubbleSort(int *alist, int max_idx)
{
	int idx,idy;
	for(idx=0;idx<max_idx;idx++)
	{
		for(idy=idx+1;idy<max_idx;idy++)
		{
			int num_idx=*(alist+idx*sizeof(int));
			int num_idy=*(alist+idy*sizeof(int));
			if(num_idx>num_idy)
			{
				int tmp=num_idx;
				*(alist+idx*sizeof(int))=num_idy;
				*(alist+idy*sizeof(int))=tmp;
			} 
			
		}
	}

}



/*
int CheckAns(int answer, int input)
{
}

int BinarySearch(int)//not done yet
{
}
*/
