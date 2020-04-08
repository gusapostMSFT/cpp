#include <iostream>

// Essentially pastes the file here behind the scenes.
#include "Cat.h"

using namespace std;

// :: are the equivalent of the . operator in other languages.
// They just specify the method derives from the class.
// Only need :: when defining it's method.
// Class::method makes the methon a member of the class.
Cat::Cat() {
	happy = true;
	age = 2;
	cout << "Cat created." << endl;
}

Cat::~Cat() {

	cout << "Cat destroyed." << endl;

}

void Cat::speak() {

	if (happy) {
		cout << "Meow." << endl;
	}
	else {
		cout << "Hissss..." << endl;
	}
}

void Cat::jump() {
	cout << "Jumping to the top of a table." << endl;
}

// The following methods are setter/mutator methods.
// These methods are used to change something about the object, usually a variable.
void Cat::make_happy() {
	happy - true;
}
void Cat::make_sad() {
	happy = false;
}

void Cat::set_age(int desired_age) {
	age = desired_age;
}

void Cat::set_name(string desired_name) {
	name = desired_name;
}

// The following methods are getter methods.
// These methods return the value of a variable for viewing purposes.
int Cat::get_age()
{
	return age;
}

string Cat::get_name()
{
	return name;
}

string Cat::to_string() {
	// Remember concatenation is a thing.
	return "The cat's name is: " + name;
}