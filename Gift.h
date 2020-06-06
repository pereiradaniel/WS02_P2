#ifndef SDDS_GIFT_H
#define SDDS_GIFT_H

namespace sdds
{
	// vars
	const int MAX_DESC = 15;
	const double MAX_PRICE = 999.999;

	struct Gift
	{
		char g_description[MAX_DESC + 1];	// statically allocated array of chars
		double g_price;	// price of the gift 0 - MAX_PRICE
		int g_units;	// number of units/copies of the Gift
	};


	// Prototypes
	void gifting(char* g_description);
	void gifting(double& g_price);
	void gifting(int& g_units);
	void display(const Gift& current_gift, int num_gifts);
}

#endif