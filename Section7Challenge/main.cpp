#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	// 2 empty vectors of integers
	vector <int> vector1;
	vector <int> vector2;
	
	// Add 10 and 20 to vector1 using push_back
	vector1.push_back(10);
	vector1.push_back(20);
	
	// Display elements in vector1 using at() and its size using size() methods
	cout << "\nvector1: " << endl; 
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl; 
	cout << "vector1 contains " << vector1.size() << " elements"  << endl;
	
	// Add 100 and 200 to vector2 using push_back
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "\nvector2: " << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "vector2 contains " << vector2.size() << " elements" << endl;
	
	// Declare empty 2D vector called vector_2d
	vector <vector <int>> vector_2d;
	
	// Add vector1 to vector_2d using push_back
	// Add vector2 to vector_2d using push_back
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	// Display the elements in vector_2d using at() method
	cout << "\nvector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	// Change vector1.at(0) to 1000
	vector1.at(0) = 1000;
	
	// Display elements in vector_2d again using at() method
	cout << "\nvector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	// Display the elements in vector1
	cout << "\nvector1: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "vector1 contains: " << vector1.size() << " elements" << endl;
	
	
	return 0;
}
