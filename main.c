#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = {1, 0, 3, 4, 5};
	int b[SIZE] = {1, 2, 3, 4, 5}; 
	int flag_same = 1; 
		
	for( i=0; i<SIZE; i++){
		if (a[i] != b[i]){
			printf("Not same at %dth element!\n", i);
			flag_same = 0;
		}
	}
	
	printf("Are a and b the same? %d", flag_same);
	
	return 0;
}
