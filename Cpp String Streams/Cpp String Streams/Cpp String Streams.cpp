#include <iostream>
// must include this for string streams
#include <sstream>
using namespace std;

int main() {

	string name = "Nicolo";
	int age = 17;

	// stringstream lets you concatenate different types of data.
	// This is a stream that you can send multiple data types to.
	stringstream ss;

	// Puts name, a comma, and age in the stringstream object.
	ss << name << ", " << age;

	// Parses the stringstream into a string.
	string info = ss.str();

	cout << info << endl;

	return 0;
}