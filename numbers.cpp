#include "numbers.h"
const char* edin[] = { "одна", "двi", "три", "чотири", "п`€ть", "шiсть", "сiм", "вiсiмь", "дев`€ть" };
const char* teen[] = { "одинадц€ть", "дванадц€ть", "тринадц€ть", "чотирнадц€ть", "п`€тнадц€ть", "шiстнадц€ть", "сiмнадц€ть", "вiсiмнадц€ть", "дев`€тнадц€ть" };
const char* des[] = { "двадц€ть ", "тридц€ть ", "сорок ", "п`€тдес€т ", "шiстдес€т ", "сiмдес€т ", "вiciмдес€т ", "дев`€носто " };
const char* sto[] = { "сто ", "двiстi ", "триста ", "чотириста ", "п`€тсот ", "шiстсот ", "сiмсот ", "вiсiмсот ", "дев`€носто " };
const char* thousand[] = { "одна тис€ча ", "двi тис€чi ", "три тис€чi ", "чотири тис€чi ", "п`€ть тис€ч ", "шiсть тис€ч ", "сiм тис€ч ", "вiсiм тыс€ч ", "дев`€ть тыс€ч " };
void UAH(int a)
{
	int q, w, e, r, t, y;
	q = a % 10;                // число одиниць
	w = (a % 100) / 10;        // число дес€тк≥в
	e = (a % 1000) / 100;      // число сотень
	r = (a % 10000) / 1000;    //число тис€ч
	t = (a % 100000) / 10000;  //число дес€тк≥в тис€ч
	y = a / 100000;            // число сотен тис€ч
	
	if (y != 0 && r == 0 && t == 0)
		printf("%s тис€ч ", sto[y - 1]);
	else if (y != 0)
		printf("%s", sto[y - 1]);

	if (t != 0 && t != 1 && r == 0)
		printf("%s тис€ч ", des[t - 1]);
	else if (t != 0 && t != 1 && r != 0)
		printf("%s", des[t - 2]);

	if (r != 0)
		printf("%s", thousand[r - 1]);
	else if (r == 0 && t == 1)
		printf("дес€ть тис€ч");
	else if (r != 0 && t == 1)
		printf("%s тис€ч ", teen[r - 1]);


	if (q == 0 && w == 0 && e == 0)
		printf("");

	if (e != 0)
		printf("%s", sto[e - 1]);

	if (w == 0)
		printf(" ");
	else if (w == 1 && q != 0)
		printf("%s", teen[q - 1]);
	else if (w != 1)
		printf("%s", des[w - 2]);

	if (q != 0 && w != 1)
		printf("%s ", edin[q - 1]);
	else if (q == 0 && w == 1)
		printf("дес€ть");
	else if (q == 0 && w == 0)
		printf(" ");

	if (q == 0 && w == 0 && e == 0 && r == 0 && t == 0 && y == 0)
		printf("нуль");
}
void penny(int b)
{
	int q, w;
	q = b % 10;           // число одиниць
	w = ((b % 100)/10);   // число дес€тк≥в

	if (q == 0 && w == 0) 
		printf("нуль");
	if (q == 0 && w != 0)
		printf("%s", des[w - 2]);
	if (q != 0 && w == 0)
		printf("%s", edin[q - 1]);
	if (q != 0 && w != 0)
		if (b > 19) {
			printf("%s", des[w - 2]);
			printf("%s ",edin[q - 1]);
		}
		else
		printf("%s ",  teen[q - 1]);
}
void print_UAH(int a)
{
	if ((20 > a) && (a > 10))
		printf(" гривень ");
	else {
		switch (a % 10)
		{
		case 1:printf(" гривн€ ");
			break;
		case 2:
		case 3:
		case 4:printf(" гривнi ");
			break;
		default:printf(" гривень ");
			break;
		}
	}

}
void print_penny(int b)
{
	if ((20 > b) && (b > 10))
		printf(" копiйок");
	else {
		switch (b%10)
		{
		case 1:printf(" копiйка");
			break;
		case 2:
		case 3:
		case 4:printf(" копiйки");
			break;
		default:printf(" копiйок");
			break;
		}
	}
}
