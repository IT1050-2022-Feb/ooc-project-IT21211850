#include <iostream>
#include <cstring>
#include "Customer.h"
#include "Vaccine.h"

using namespace std;


class Reservation {
	private :
		Customer *customer;
		Vaccine *vaccine;
		int reserveDate;
		char reserveVenue[];
	public :
		void Add_ReservationDetails(Customer *rcus,Vaccine *rvac,int rDate,char rVenue[]);
		~Reservation();
};
