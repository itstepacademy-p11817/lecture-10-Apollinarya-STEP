/*Зарплата менеджера составляет 200$ + процент от продаж, продажи до 500$ - 3 % , от 500 до 1000 – 5 % , свыше 1000 – 8 % .Пользователь вводит с 
клавиатуры уровень продаж для трех менеджеров.Определить их зарплату, определить лучшего менеджера, начислить ему премию 200$, вывести итоги на экран.
*/

#include <stdio.h>

int main()
{
	int sales;
	int salaryA;
	int salaryB;
	int salaryC;

	///////// Salary A
	printf("Enter sales for manager A: ");
	scanf_s("%d", &sales);
	if (sales < 500)
	{
		salaryA = 200 + (sales * 3 / 100);
	}
	else if (sales < 1000)
	{
		salaryA = 200 + (sales * 5 / 100);
	}
	else
	{
		salaryA = 200 + (sales * 8 / 100);
	}

	////////// Salary B
	printf("Enter sales for manager B: ");
	scanf_s("%d", &sales);
	if (sales < 500)
	{
		salaryB = 200 + (sales * 3 / 100);
	}
	else if (sales < 1000)
	{
		salaryB = 200 + (sales * 5 / 100);
	}
	else
	{
		salaryB = 200 + (sales * 8 / 100);
	}

	/////////// Salary C
	printf("Enter sales for manager C: ");
	scanf_s("%d", &sales);
	if (sales < 500)
	{
		salaryC = 200 + (sales * 3 / 100);
	}
	else if (sales < 1000)
	{
		salaryC = 200 + (sales * 5 / 100);
	}
	else
	{
		salaryC = 200 + (sales * 8 / 100);
	}

	////// Who is the best?
	if ((salaryA == salaryB) && (salaryB == salaryC))
	{
		salaryA += 100;
		salaryB += 100;
		salaryC += 100;
		printf("All managers are good and get bonus 100.\n");
	}
	else if (salaryA == salaryB)
	{
		if (salaryA > salaryC)
		{
			salaryA += 150;
			salaryB += 150;
			printf("Manager A and B are the best. They get bonus 150.\n");
		}
		else
		{
			salaryC += 200;
			printf("Manager C is the best manager. Bonus 200.\n");
		}
	}
	else if (salaryB == salaryC)
	{
		if (salaryB > salaryA)
		{
			salaryC += 150;
			salaryB += 150;
			printf("Manager B and C are the best. They get bonus 150.\n");
		}
		else
		{
			salaryA += 200;
			printf("Manager A is the best manager. Bonus 200.\n");
		}
	}
	else if (salaryC == salaryA)
	{
		if (salaryC > salaryB)
		{
			salaryC += 150;
			salaryA += 150;
			printf("Manager A and C are the best. They get bonus 150.\n");
		}
		else
		{
			salaryB += 200;
			printf("Manager B is the best manager. Bonus 200.\n");
		}
	}
	else if ((salaryA > salaryB) && (salaryA > salaryC))
	{
		salaryA += 200;
		printf("Manager A is the best manager. Bonus 200.\n");
	}
	else if ((salaryB > salaryA) && (salaryB > salaryC))
	{
		salaryB += 200;
		printf("Manager B is the best manager. Bonus 200.\n");
	}
	else// if ((salaryC > salaryA) && (salaryC > salaryB))
	{
		salaryC += 200;
		printf("Manager C is the best manager. Bonus 200.\n");
	}
	printf("Manager A salary: %d;\nManager B salary: %d;\nManager C salary: %d.", salaryA, salaryB, salaryC);
		
	getchar(); getchar();
	return 0;
	}