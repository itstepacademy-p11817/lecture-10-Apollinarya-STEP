#include <stdio.h>

int main()
{

	int day1;
	int month1;
	int year1;
	int day2;
	int month2;
	int year2;
	printf("Data 1: ");
	scanf_s("%d.%d.%d", &day1, &month1, &year1);
	printf("Data 2: ");
	scanf_s("%d.%d.%d", &day2, &month2, &year2);	
	int globalYear = year1;
	int days = 0;
	int days1 = 0;
	int days2 = 0;
	int globalDay;

	// Podschet dnej za neskol'ko let
	while (globalYear < year2)
	{
		// Podschet dnej za odin god
		for (int x = 1; x <= 12; x++)
		{
			globalDay = 28 + (x + (x / 8)) % 2 + 2 % x + 2 * (1 / x); // ideja vz'ata ots'uda: https://habrahabr.ru/post/261773/ Eto genial'no na moj vzgl'ad
			if (globalYear%4 == 0 && x == 2)
			{
				globalDay++;
			}
			days += globalDay;
		}
		globalYear++;
	}

	//Podschet dnej v pervom godu
	for (int x = 1; x < month1; x++)
	{
		globalDay = 28 + (x + (x / 8)) % 2 + 2 % x + 2 * (1 / x);
		if (year1 % 4 == 0 && x == 2)
		{
			globalDay++;
		}
		days1 += globalDay;
	}
	days1 += day1;

	//Podschet dnej v poslednem godu
	for (int x = 1; x < month2; x++)
	{

		globalDay = 28 + (x + (x / 8)) % 2 + 2 % x + 2 * (1 / x);
		if (year2 % 4 == 0 && x == 2)
		{
			globalDay++;
		}
		days2 += globalDay;
	}
	days2 += day2;
	days = days - days1 + days2;
	printf("days %d\n", days);

	getchar(); getchar();
    return 0;
}


