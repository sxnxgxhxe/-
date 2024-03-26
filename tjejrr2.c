#include <stdio.h>

void main()
{
	int a;

	printf("ÁĄźö¸Ś ŔÔˇÂÇĎźźżä : ");
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
	default:
		printf("F");
		break;
	}

	
}
