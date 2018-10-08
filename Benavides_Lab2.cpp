// This program gives discounts based on the quantity of software purchased.
// Mario Benavides
// Lab 2 Completed

#include <iostream>
using namespace std;

int main()
{
	double ordered, discount, grand, total; 		// declares variables
	int software = 199.00;					// cost for math later
	
	
	cout << "How many units are being purchased? "; 	// input question
	cin >> ordered; 					// input
	
	
	if (ordered >= 1 && ordered <= 9) 			// 0-9 no discount
	{
		total = ordered * software;
			discount = 0;
				grand = total - discount;
	}	

	else if (ordered >= 10 && ordered <= 19) 		// 10-19
	{
		total = ordered * software;
			discount = total * .20;
				grand = total - discount;
	}	

	else if (ordered >= 20 && ordered <= 49) 		// 20-49
	{
		total = ordered * software;
			discount = total * .30;
				grand = total - discount;	
	}
				
	else if (ordered >= 50 && ordered <= 99)		 // 50-99
	{
		total = ordered * software;
			discount = total * .40;
				grand = total - discount;
	}
				
	else if (ordered >= 100) 				// 100+
	{
		total = ordered * software;
			discount = total * .50;
				grand = total - discount;
	}	
	
	
	cout << "You saved $ " << discount << endl;		 // added a "you saved" section for fun. 
	cout << "The total cost of the purchase is $ " << grand << endl;
	
	return 0;	
}
