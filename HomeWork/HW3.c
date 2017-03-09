#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Function: Check the number match the condition or not.
int CheckNum(int num);

//Function: Check the answer that user input and return nAnB.
int CheckAns(int answer[4], int input[4]);

//Function: Bubble Sort.
void BubbleSort(int *alist, int max_idx);

int main(void)
{
    int idx=0;
	  //set random seed 
	  time_t t;
	  srand((unsigned) time(&t));
	
	  int *int_list;
	  int_list=(int *)malloc(sizeof(int));
        
    // make a number	
    int num = *(int_list+idx*sizeof(int));
	  for(idx=0;idx<1;idx++)
	  {

		    //while (int returned_CheckNum)
		    int returned_CheckNum = 0;
                while(returned_CheckNum == 0)
                {
		    *(int_list+idx*sizeof(int))=rand()%10000;
		    printf("int_list=%d\n",*(int_list+idx*sizeof(int))) ;
		    returned_CheckNum= CheckNum(*(int_list+idx*sizeof(int)));
		    printf("%d\n",returned_CheckNum);
                    num = *(int_list+idx*sizeof(int));
                }                
                printf("Game Started!!\n");                                  
                //printf("1.the answer=%d\n", *(int_list+idx*sizeof(int)));               
	   }

    //change the number into array
    //printf("2.the answer=%d\n", num);
    int a,b,c,d,e,f,g,h;
	  a=num;
	  b=num%1000;
	  c=num%100;
	  d=num%10;
	
	  e=d;//ones
	  f=(c-d)/10;//tens 
  	g=(b-c)/100;//hundred
	  h=(a-b)/1000;//thousand
        
    int p[3];
    p[0]=h;
    p[1]=g;
    p[2]=f;
    p[3]=e;
    for(idx=0;idx<4;idx++)
    {
        printf("p[%d]=%d\n",idx,p[idx]);
    }

            

    //user input
    int user_input[4];
    printf("Guess A Number!!!~~\n");
    for(idx=0;idx<4;idx++)
    {
        scanf(" %d",&user_input[idx]);
    }

    for(idx=0;idx<4;idx++)
    {
        printf("user_input[%d]=%d\n",idx,user_input[idx]);
    }


    /*
	  //buble sort
 	  BubbleSort(int_list, 10);
	
	  printf("After Sorting:\n");
	
	  for(idx=0;idx<10;idx++)
    {
        printf("idx=%d, int_list=%d\n",idx,*(int_list+idx*sizeof(int)));
	  }
	  */
    int CheckAns(int answer[4], int input[4])
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
	
	e=d;//ones
	f=(c-d)/10;//tens 
	g=(b-c)/100;//hundred
	h=(a-b)/1000;//thousand
	
	if(e!=f && e!=g && e!=h && f!=g && f!=h && g!=h && a>=1234) 
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



int CheckAns(int answer[4], int input[4])
{
    int i,j,A=0,B=0;
    for(i=0;i<4;i++)
    {
        if(answer[i]==input[i])
        {
            return A+1;
        }
			  for(j=1;j<4;j++)
        {
            if(answer[i]==input[j] && answer[i]!=input[i])
						{
						    return B+1;
						}
        }
    }
   
}


