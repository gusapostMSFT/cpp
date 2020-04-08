#pragma once
#include <iostream>
using namespace std;

/*
	Classes are a way to bundle data with subroutines.
	Think of them as defining your own variable types.
	Classes are what you use them for.
*/

// Define the class with the keyword class and it's name.
// No need for ().
class Cat {


// Destructors run once when an object is destroyed.

// Anything within private is not able to be accessed from another file, only from the class.
private:
	// These are instance variables.
	// Every instance of this class will have it's own variable.
	int age;
	bool happy;
	string name;

// public makes the functions inside accessible outside of the files associated with this class.
public:
	// Cat() is a constructor.
	// Notice how it is the same name as the class.
	// Constructors run once when a new instance of the class object is instantiated.
	// Constructors do not have a return type, so no need for a keyword in front.
	Cat();

	// ~Cat() is a destructor.
	// Same exact properties as a constructor, except instead of running on start it runs on destroy.
	~Cat();

	void speak();
	void jump();
	void make_happy();
	void make_sad();
	void set_age(int desired_age);
	int get_age();
	void set_name(string desired_name);
	string get_name();
	string to_string();

// Notice there is a ; following the }.
};