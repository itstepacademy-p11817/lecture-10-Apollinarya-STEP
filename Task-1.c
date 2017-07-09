#include <stdio.h>

int main()
{
	int fuel;
	int remainFuel;
	int extraFuel;
	const int maxFuel = 300;
	int consumption;
	//1 per km (500kg) (300km); 4 per km (1000kg) (75km); 7 per km (1500kg) (42km); 9 per km (2000kg) (33km)
	int weight;
	int distanceAB;
	int distanceBC;
	// Вес груза и расход топлива
	printf("Enter cargo weight ");
	scanf_s("%d", &weight);
	if (weight > 2000)
	{
		printf("Your cargo weight exceeds the allowable limit.\n");
		getchar(); getchar();
		return 0;
	}
	else if (weight >= 1500)
	{
		consumption = 9;
	}
	else if (weight >= 1000)
	{
		consumption = 7;
	}
	else if (weight >= 500)
	{
		consumption = 4;
	}
	else // weight <500
	{
		consumption = 1;
	}
	printf("You can afford %d kilometers with full tank without refueling.\n", (maxFuel / consumption));
	// Первая дистанция (Проверяет возможность первого полёта; Включает вторую дистанцию)
	printf("Enter distance between point A and point B ");
	scanf_s("%d", &distanceAB);
	remainFuel = maxFuel - (distanceAB*consumption);
	if (remainFuel < 0)
	{
		printf("Distance is too big. Not enough fuel.\n");
		getchar(); getchar();
		return 0;
	}
	else
	{
		//Вторая дистанция (Проверяет возможность полёта и высчитывает необходимость дозаправки; Выводит результат)
		printf("Enter distance between point B and point C ");
		scanf_s("%d", &distanceBC);
		fuel = remainFuel - (distanceBC*consumption);
		if (fuel == 0)
		{
			printf("Flight is available. No need to refuel in point B.\n\nHave a nice flight.\n");
		}
		else if (fuel < 0)
		{
			extraFuel = fuel*(-1);
			if ((extraFuel + remainFuel) <= maxFuel)
			{
				printf("You need to add extra %d liters of fuel\nin point B to reach your destination.\n\nHave a nice flight.\n", extraFuel);
			}
			else
			{
				printf("You can't reach your destination. It's too far.\nRequired amount of fuel exceeds the allowable limit.");
				getchar(); getchar();
				return 0;
			}
		}
		else
		{
			printf("Flight is available. No need to refuel in point B.\n");
			printf("You can afford %d kilometers for flight back.\n\nHave a nice flight.\n", (fuel / consumption));
		}
	}
	getchar(); getchar();
	return 0;
}