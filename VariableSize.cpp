#include <iostream>
#include <climits>

using namespace std;

int main () {

cout << "The min size of a bool is: "<< sizeof(bool) << ". The max is: " << endl;
cout << "The min size of a int is: "<< sizeof(int) << ". The max is: "<< INT_MAX  << endl;
cout << "The min size of a short is: "<< sizeof(short) << ". The max is: "<< SHRT_MAX  << endl;
cout << "The min size of a long is: "<< sizeof(long) << ". The max is: "<< LLONG_MAX << endl;
cout << "The min size of a double is: "<< sizeof(double) << ". The max is: " << endl;
cout << "The min size of a float is: "<< sizeof(float) << ". The max is: "  << endl;
cout << "The min size of a char is: "<< sizeof(char) << ". The max is: "<< CHAR_MAX << endl;

	return 0;
}