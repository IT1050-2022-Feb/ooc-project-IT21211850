#include <iostream>
#include <cstring>
#include "Vaccine.h"
using namespace std;


//Implementing Vaccine class public methods
        
Vaccine::Vaccine()
{
	  cout << "Vaccine default constructor called "<< endl;
}
        
Vaccine::Vaccine(char vtype[],char vID[],char Vname[],int vageres)
{
     strcpy(vaccineType,vtype);
 	   strcpy(vaccineID,vID);
     strcpy(vaccineName,Vname);
 	   VacgeRestriction = vageres;
  
 	 cout << "Vaccine Constructer successful"<< endl;
}
        
void Vaccine::update_availableplaces(char Aplaces[])
{
    	strcpy(AvailablePlaces,Aplaces);
    	cout << "Vaccine update_availableplaces method successful"<< endl;
}
        
void Vaccine::update_vacAmount(int vacAmount)
{
    	vaccineAmount=vacAmount;
    	cout << "Vaccine update_vacAmount method successful"<< endl;
  
}