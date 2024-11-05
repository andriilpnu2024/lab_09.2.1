/*
 lab_9_2.1
�������������� ��������� ������ ���������, ���������������, ���������
������� ���������� ����� ��� ���������� ��������� �� ���� ���������, ������� ��������
���������� ��������� ������. ������� max(), min(), ���������� ������ (�����������
��������), ��������� ����������, ������� ������, ��������� �� �������, ����������
������ ������ � ������ �������. �������� ������ ��������� ������������.
*/
#include <stdio.h>
#include <conio.h>
#include "Header.h"
int main()
{
	puts("Lab 9.2.1 Using macros and preprocessing directive");
	int x, y, // ���� ��� ����������
		dopomoha, // �������� �����
		min_kvadr,
		a_kvadr, // ������� �����
		maxim; // ����������� � ����� �����
#if z<10 && z>=1 // ���� ����� �������, 
		// �� ������ �������� � ����� �����
		puts("define maximum of two numbers");
		puts("Input 2 integer numbers");
		scanf("%d", &x);// �������� �����
		PRINTI(x); // ������ ��������� �����
		scanf("%d", &y);
		PRINTI(y);
		PRINTI(z);
		dopomoha = MIN(x + y, x + z);
		min_kvadr = SQR(dopomoha);
		PRINTI(min_kvadr);
#else // ���������� ���� ������� ��������, ���� N >= 10
		{
			a_kvadr = SQR(x);// ������ ���������� �������� �����
			PRINTI(a_kvadr);
			dopomoha = MODULE(y-z);
			maxim = MAX(a_kvadr, dopomoha);// ����� ��������� � ���� �����
			maxim = MAX(maxim, z);
			PRINTR(maxim); // ������ ��������� ����������
		}
#endif // ���������� ����� ������ ���������
		return 0;
}