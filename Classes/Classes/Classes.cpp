#include <iostream>
// Must include the class header file in all files where the class is being referenced.
#include "Cat.h"
using namespace std;

int main() {

	// Instantiates cat as a Cat object.
	// Scope is the region in which the object exists.
	// When the end } is reached, the destructor will be called.
	Cat cat;

	// To acess the variables or methods of a class, use the . operator
	cat.set_age(7);
	cat.make_happy();
	cat.speak();
	cat.jump();

	// Naked {} can be used if you want to be able to deallocate memory at a certain point in your code.
	// Cat test will only exist between the following {}.
	{
		Cat test;

		cat.set_age(9);
		cat.make_happy();
		cat.speak();
		cat.jump();
	}
	
	return 0;
}