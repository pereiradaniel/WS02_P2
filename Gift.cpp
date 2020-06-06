#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Gift.h"

using namespace std;

namespace sdds
{
	void gifting(char* g_description)
	{
		cout << "Enter gift description: ";
		cin.width(16);
		cin >> g_description;
	};

	void gifting(double& g_price)
	{
		cout << "Enter gift price: ";
		cin >> g_price;
		while (g_price < 0 || g_price > MAX_PRICE) {
			cout << "Gift price must be between 0 and " << MAX_PRICE << endl;
			cout << "Enter gift price: ";
			cin >> g_price;
		}
	};

	void gifting(int& g_units)
	{
		cout << "Enter gift units: ";
		cin >> g_units;
		while (g_units < 1) {
			cout << "Gift units must be at least 1" << endl;
			cout << "Enter gift units: ";
			cin >> g_units;
		}
	};

	void display(const Gift& current_gift, int num_gifts)
	{
		for (int i = 0; i < num_gifts; i++)
		{
			cout << "Gift #" << i + 1 << ": " << endl;
			cout << "Gift Details:" << endl;
			cout << " Description: " << (&current_gift + i)->g_description << endl;
			cout << "       Price: " << (&current_gift + i)->g_price << endl;
			cout << "       Units: " << (&current_gift + i)->g_units << endl;
			cout << endl;
		}
	};
}