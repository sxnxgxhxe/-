#include <stdio.h>

void main()
{
	int a, b;
	char ch;

	printf("첫 번째 수를 입력하세요 :");
	scanf_s("%d", &a);

	printf("계산할 연산자를 입력하세요 :");  
	scanf_s(" %c", &ch); //띄어쓰기를 해주자

	printf("두 번째 수를 입력하세요 :");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다. \n", a, b, a + b);

	else if (ch == '-')
		printf("%d - %d = %d 입니다. \n", a, b, a - b);

	else if (ch == '*')
		printf("%d * %d = %d 입니다. \n", a, b, a * b);

	else if (ch == '/')
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);

	else if (ch == '%')
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);

	else
		printf("연산자를 잘못 입력했습니다");
}
