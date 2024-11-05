/*
 lab_9_2.1
Використовуючи директиви умовної компіляції, макровизначення, включення
власних заголовних файлів для необхідних оголошень та інші директиви, скласти програму
обчислення наведених виразів. Функції max(), min(), визначення модуля (абсолютного
значення), виведення результатів, логічних виразів, піднесення до степеня, визначення
коренів задати у вигляді макросів. Значення змінних задаються користувачем.
*/
#include <stdio.h>
#include <conio.h>
#include "Header.h"
int main()
{
	puts("Lab 9.2.1 Using macros and preprocessing directive");
	int x, y, // змінні для розрахунків
		dopomoha, // допоміжна змінна
		min_kvadr,
		a_kvadr, // квадрат числа
		maxim; // максимальне з трьох чисел
#if z<10 && z>=1 // якщо умова істинна, 
		// то шукаємо максимум з трьох чисел
		puts("define maximum of two numbers");
		puts("Input 2 integer numbers");
		scanf("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf("%d", &y);
		PRINTI(y);
		PRINTI(z);
		dopomoha = MIN(x + y, x + z);
		min_kvadr = SQR(dopomoha);
		PRINTI(min_kvadr);
#else // компілювати іншу частину програми, якщо N >= 10
		{
			a_kvadr = SQR(x);// макрос визначення квадрату числа
			PRINTI(a_kvadr);
			dopomoha = MODULE(y-z);
			maxim = MAX(a_kvadr, dopomoha);// пошук максимуму з двох чисел
			maxim = MAX(maxim, z);
			PRINTR(maxim); // макрос виведення результату
		}
#endif // завершення блоку умовної компіляції
		return 0;
}