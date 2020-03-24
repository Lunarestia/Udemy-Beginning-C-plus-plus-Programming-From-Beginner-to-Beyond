#include <iostream>

using namespace std;

int main() {
	
	// Define conversion values in cents
	const int dollarValue {100};
	const int quarterValue {25};
	const int dimeValue {10};
	const int nickelValue {5};
	
	int changeAmount {};
	
	// Solution 1 - Not using a modulo operator
	cout << "Enter an amount in cents: ";
	cin >> changeAmount;
	
	int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
	
	dollars = changeAmount / dollarValue;
	balance = changeAmount - (dollars * dollarValue);
	
	quarters = balance / quarterValue;
	balance -= quarters * quarterValue;
	
	dimes = balance / dimeValue;
	balance -= dimes * dimeValue;
	
	nickels = balance / nickelValue;
	balance -= balance * nickelValue;
	
	pennies = balance;
	
	cout << endl << "You can provide this change as follows: " << endl;
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;
	
	cout << endl;
	return 0;
}
