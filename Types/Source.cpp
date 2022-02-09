#include <iostream>
using namespace std;
//prints out the size in bytes of each of the fundamental data types in C++
int main(int argc, char** argv)
{
	cout << "size of char : " << sizeof(char) << " byte " << endl;
	cout << "size of short int : " << sizeof(short int) << " bytes " << endl;
	cout << "size of int : " << sizeof(int) << " bytes" << endl;
	cout << "size of long int : " << sizeof(long int) << "bytes" << endl;
	cout << "size of signed long int : " << sizeof(signed long int) << " bytes " << endl;
	cout << "size of unsigned long int: " << sizeof(unsigned long int) << " bytes " << endl;
	cout << "Size of float : " << sizeof(float) << " bytes" << endl;
	cout << "Size of double : " << sizeof(double) << " bytes" << endl;
	cout << " size of long double : " << sizeof(long double) << "bytes" << endl;

	return 0;

}