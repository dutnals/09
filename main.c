#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int testScore[5];
	int i;
	
	testScore[0] = 10;
	testScore[1] = 20;
	testScore[2] = 30;
	testScore[3] = 40;
	testScore[4] = 50;
	
	for(i=0; i<5; i++){
		printf("grade[%d] = %d\n", i, testScore[i]);
	}
	
	return 0;
}
