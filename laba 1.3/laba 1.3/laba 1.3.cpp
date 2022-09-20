#include<stdio.h>
int main()
{
	float a, b, c;
	int positive=0;
	printf("Enter three numbers:\n ");
	if (scanf_s("%f%f%f", &a, &b, &c) == 3)//сканирует abc и выдаёт ошибку если ввести неверное значение 
	{
		if (a > 0 ) 
			positive++;
		if (b > 0) 
			positive++;
		if (c > 0) 
			positive++;
		
			printf("number of positive numbers:\n%d", positive);//выводит количество пололожительных чисел 

		
	}
		else printf("Uncorrect input");
			return 0;
}