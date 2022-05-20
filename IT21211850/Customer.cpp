#include "Customer.h"
#include <iostream>
#include <cstring>
#include "Feedback.h"
using namespace std;

//Implementing Customer class public methods
        
Customer::Customer()
{
   cout << "Customer default" <<endl; 
}
        
Customer::Customer(char cID[],char cNIC[],char cAddress[],char Cdob[],int cage,int cTPN)
{
  	strcpy(customerID,cID);
	  strcpy(customerNIC,cNIC);
	  strcpy(customerAddress,cAddress);
  	strcpy(customerDob,Cdob);
  	customerAge=cage;
  	customerTPNumber=cTPN;
  
  	cout<<"Customer Overloaded constructor succsessful " <<endl;
}
        
void Customer::RegisterForReservation()
{
   cout<<"Customer RegisterForReservation method succsessful " <<endl;
}
        
void Customer::ChannelDoc()
{
  cout << "Customer ChannelDoc method successful"<< endl;
}
        
void Customer::eChannelPayment()
{
  cout << "Customer eChannelPayment method successful"<< endl;
}
        
void Customer::ReservePlace()
{
  cout << "Customer ReservePlace method successful"<< endl;
}
        
void Customer::SubmitFeed(Feedback *f)
{
  cout << "Customer SubmitFeed method successful"<< endl;
}
