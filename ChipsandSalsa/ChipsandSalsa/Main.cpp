#include <iostream>
#include <string>

using namespace std;

int main()
{
	string salsa[5] = {" mild", " medium", " sweet", " hot", " zesty"};
	int sold[5];
	int total = 0;
	int max = 0;
	int min = 0;


	cout << "You can buy five different kinds of salsa: mild, medium, sweet, hot, or zesty." << endl;
	cout << "Please enter the amount of jars sold for each type of salsa: " << endl;


	for (int i = 0; i < 5; i++)
	{
		cout << "How many " <<  salsa[i] << " jars were sold this month? " << endl;
		cin >> sold[i];

		if (sold[i] < 0)
		{
			cout << "Please enter a positive number." << endl;
			i--;
		}
		
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "This month we sold " << sold[i] << salsa[i] << " jars." << endl;
		total = total + sold[i];

		if (sold[i] > sold[max])
		{
			max = i;
		}

		if (sold[i] < sold[min])
		{
			min = i;
		}
	}


	

	cout << "This month we sold a total of: " << total << " jars of salsa." << endl;
	cout << "The highest selling salsa was: " << salsa[max] << endl;
	cout << "The lowest selling salsa was: " << salsa[min] << endl;
	
}