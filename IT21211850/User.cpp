#include "User.h"
#include <iostream>
using namespace std;

// Implementing user public methods
User::User() {
	cout << "User default constructor" << endl;
}

void User::verify_login() {
	cout << "User verify login method successful " << endl;
}
