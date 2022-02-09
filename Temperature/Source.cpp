#include <iostream>
using namespace std;
//fahrenheit measurement
int main(int argc, char** argv) {
	
	float fahrenheit =0.0f;  // declaration of variables
	float celsius = 0.0f;
	cout << "input a Fahrenheit measurement\n" << endl;
	cin >> fahrenheit;

	//convert to celsius

	celsius = (float) 5 / 9 * (fahrenheit - 32);
	cout << fahrenheit << " Your value for celsuis is " << celsius << " centigradi " << endl;

	return 0; 
}