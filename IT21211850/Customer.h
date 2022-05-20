#include <iostream>
#include "Feedback.h"
#include "User.h"

class Customer :public User {
	private :
		char customerID[8];
		char customerNIC[12];
		char customerAddress[30];
		char customerDob[10];
		int customerAge;
		int customerTPNumber;
   

	public :
	  Customer();
	  Customer(char cID[],char cNIC[],char cAddress[],char Cdob[],int cage,int cTPN);
	  void RegisterForReservation();
   	void ChannelDoc();
	  void eChannelPayment();
	  void ReservePlace();
	  void SubmitFeed(Feedback *f);
  
};