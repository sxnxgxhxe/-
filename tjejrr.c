#include <stdio.h>

void main()
{
	int a, b;
	char ch;

	printf("ù ��° ���� �Է��ϼ��� :");
	scanf_s("%d", &a);

	printf("����� �����ڸ� �Է��ϼ��� :");
	scanf_s(" %c", &ch);

	printf("�� ��° ���� �Է��ϼ��� :");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);

	else if (ch == '-')
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);

	else if (ch == '*')
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);

	else if (ch == '/')
		printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b);

	else if (ch == '%')
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);

	else
		printf("�����ڸ� �߸� �Է��߽��ϴ�");
}