#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int sum = 0;
	int testScore[SIZE];
	
	for(i=0; i<SIZE; i++)
	{
		printf("�л� ������ �Է��ϼ��� : ");
		scanf("%d", &testScore[i]);
		sum += testScore[i];
	}
	
	for( i=0; i<SIZE; i++)
		printf("testScore[%d] = %d\n", i, testScore[i]);
		
	printf("���� ��� : %d\n", sum / SIZE);
	return 0;
}
