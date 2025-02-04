#include <iostream>
using namespace std;

int main()
{
	double total_sum = 0;

	for (int number = 0;number < 1000;number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			total_sum += number;
		}
	}
	cout << "The sum of all multiples 3 or 5 below 1000 is" << total_sum << endl;
	return 0;

}