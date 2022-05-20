#include <iostream>
#include <cstring>
using namespace std;


class Vaccine {
	private : 
		char vaccineType[20];
		char vaccineID[10];
		char vaccineName[20];
    int VacgeRestriction;
		int vaccineAmount;
		char AvailablePlaces[50];

	public : 
    Vaccine();
    Vaccine(char vtype[],char vID[],char Vname[],int vageres);
		void update_availableplaces(char Aplaces[]);
		void update_vacAmount(int vacAmount);
};
