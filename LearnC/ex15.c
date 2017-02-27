#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  // USING char *
	char *input_name = (char *)malloc(sizeof(char));
	printf("input you name:\n");
	scanf("%s", input_name);
	
	printf("%s \n", input_name);
	
	int idx=0;
	while( input_name[idx] != '\0')
	{
		printf(" %c ", input_name[idx]);
		idx ++;
	}
	
	printf("\n");
	
	for( idx=0; input_name[idx] != '\0';idx ++)
	{
		printf(" %c ", input_name[idx]);
	}
	
	return 0;
}
