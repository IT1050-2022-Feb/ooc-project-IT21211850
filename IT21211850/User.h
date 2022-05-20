#include <iostream>
#include <cstring>

//Declaration of User class (Base class)
class User {
	protected :
		char userID[8];
		char userName[20];
		char userPassword[15];
		int userDate;
		char userEmail[20];

	public :
  		User();
		void verify_login();

};