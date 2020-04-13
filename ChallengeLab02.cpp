#include<iostream>

using namespace std;

int main()
{
	int x = 2187;
	int y = 0;
	int ratePerHour = 3;
	int blastTime = 15;
	int currentHour = 0;
	int hours = 2187;

	while (hours > 1)
	{
		hours = hours / ratePerHour;
		y++;
	}
	currentHour = y;
	y = 0;
	y = blastTime - currentHour;

	for (int i = 1; i <= y; i++)
	{
		x *= 3;
	}

	cout << "Luke: Captain, I have it! Direct the blast at the engine when the tribble count reaches exaclty " << x << ". We have approximately " << y << " hours before you must do this.\n";
	system("pause");
	return 0;
}