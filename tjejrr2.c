#include <stdio.h>

void main()
{
	int a;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);
	
	switch (a/10)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("F");
		break;
	}

	
}