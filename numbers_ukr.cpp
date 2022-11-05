#include "numbers.h"
int main()
{
	//Підключення  мови
	setlocale(LC_ALL, "ukr");
	int a, b;
	printf("Ведiть суму:");
	scanf_s("%6d.%3d", &a, &b);
	printf(" --> ");
	if ((0>a) || (0>b) || (b>=100)) {
		printf("Error");
		exit(-1);
	}
	else
	{
		UAH(a);
		print_UAH(a);
		penny(b);
		print_penny(b);
	}
	return 0;
}