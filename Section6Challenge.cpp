#include <iostream>

using namespace std;

int main() {
	cout << "Hello, Welcome to Frank's Carpet Cleaning Service" << endl;
	
	int numberOfSmallRooms {0};	
	cout << "\nHow many small rooms would you like cleaned? " << endl;
	cin >> numberOfSmallRooms;
	
	int numberOfLargeRooms {0};
	cout << "How many large rooms would you like cleaned? " << endl;
	cin >> numberOfLargeRooms;
	
	const double costOfSmallRooms {25};
	const double costOfLargeRooms {35};
	
	const double salesTax {0.06};
	const double estimateExpiration {30};
	
	cout << "\nEstimate for carpet cleaning service" << endl;
	
	cout << "Number of small rooms: " << numberOfSmallRooms << endl;
	cout << "Number of large rooms: " << numberOfLargeRooms << endl;
	
	cout << "Price per small room: $" << costOfSmallRooms << endl;
	cout << "Price per large room: $" << costOfLargeRooms << endl;
	
	double costBeforeTax {(numberOfSmallRooms * costOfSmallRooms) + 
		(numberOfLargeRooms * costOfLargeRooms)};
	cout << "Cost: $" << costBeforeTax << endl;
	
	double taxCost {costBeforeTax * salesTax};
	cout << "Tax: $" << taxCost << endl;
	cout << "=========================================" << endl;
	
	double totalCost {costBeforeTax + taxCost};
	cout << "Total estimate: $" << totalCost << endl;
	
	
	cout << "This estimate is valid for " << estimateExpiration << " days." << endl;
	
	cout << endl;
	
	return 0;
}
