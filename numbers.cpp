#include "numbers.h"
const char* edin[] = { "����", "��i", "���", "������", "�`���", "�i���", "�i�", "�i�i��", "���`���" };
const char* teen[] = { "����������", "����������", "����������", "������������", "�`���������", "�i���������", "�i��������", "�i�i��������", "���`���������" };
const char* des[] = { "�������� ", "�������� ", "����� ", "�`������� ", "�i������� ", "�i������ ", "�ici������ ", "���`������ " };
const char* sto[] = { "��� ", "��i��i ", "������ ", "��������� ", "�`����� ", "�i����� ", "�i���� ", "�i�i���� ", "���`������ " };
const char* thousand[] = { "���� ������ ", "��i �����i ", "��� �����i ", "������ �����i ", "�`��� ����� ", "�i��� ����� ", "�i� ����� ", "�i�i� ����� ", "���`��� ����� " };
void UAH(int a)
{
	int q, w, e, r, t, y;
	q = a % 10;                // ����� �������
	w = (a % 100) / 10;        // ����� �������
	e = (a % 1000) / 100;      // ����� ������
	r = (a % 10000) / 1000;    //����� �����
	t = (a % 100000) / 10000;  //����� ������� �����
	y = a / 100000;            // ����� ����� �����
	
	if (y != 0 && r == 0 && t == 0)
		printf("%s ����� ", sto[y - 1]);
	else if (y != 0)
		printf("%s", sto[y - 1]);

	if (t != 0 && t != 1 && r == 0)
		printf("%s ����� ", des[t - 1]);
	else if (t != 0 && t != 1 && r != 0)
		printf("%s", des[t - 2]);

	if (r != 0)
		printf("%s", thousand[r - 1]);
	else if (r == 0 && t == 1)
		printf("������ �����");
	else if (r != 0 && t == 1)
		printf("%s ����� ", teen[r - 1]);


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
		printf("������");
	else if (q == 0 && w == 0)
		printf(" ");

	if (q == 0 && w == 0 && e == 0 && r == 0 && t == 0 && y == 0)
		printf("����");
}
void penny(int b)
{
	int q, w;
	q = b % 10;           // ����� �������
	w = ((b % 100)/10);   // ����� �������

	if (q == 0 && w == 0) 
		printf("����");
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
		printf(" ������� ");
	else {
		switch (a % 10)
		{
		case 1:printf(" ������ ");
			break;
		case 2:
		case 3:
		case 4:printf(" �����i ");
			break;
		default:printf(" ������� ");
			break;
		}
	}

}
void print_penny(int b)
{
	if ((20 > b) && (b > 10))
		printf(" ���i���");
	else {
		switch (b%10)
		{
		case 1:printf(" ���i���");
			break;
		case 2:
		case 3:
		case 4:printf(" ���i���");
			break;
		default:printf(" ���i���");
			break;
		}
	}
}
