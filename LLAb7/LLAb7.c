#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RU");
	int c;
	printf("Введите номер ноты (1-7):\n");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
		printf("До\n");
		break;
	case 2:
		printf("Ре\n");
		break;
	case 3:
		printf("Ми\n");
		break;
	case 4:
		printf("Фа\n");
		break;
	case 5:
		printf("Соль\n");
		break;
	case 6:
		printf("Ля\n");
		break;
	case 7:
		printf("Си\n");
		break;
	default:
		printf("Ошибка\n");
	}
	return 0;
}