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

void Cat::make_happy() {
	happy - true;
}
void Cat::make_sad() {
	happy = false;
}

void Cat::set_age(int age) {
	this->age = age;
}