// Liczenie czasu podróży

#include <iostream>

using namespace std;

struct travel_time{

	int hours;
	int mins;
	
};

const int Mins_per_hr=60;

travel_time sum(travel_time t1, travel_time t2);  // funkcja musi byc typu jak struct

void show_time(travel_time t);


int main(){
	
	travel_time day1={5, 45};
	travel_time day2={4, 55};
	travel_time day3={4, 25};
	
	travel_time trip1=sum(day1, day2);
	show_time(trip1);
	
	travel_time trip2=sum(trip1,day3);
	cout<<"Suma 3 dni: ";
	show_time(trip2);
	
	return 0;
}

travel_time sum(travel_time t1, travel_time t2){
	
	travel_time total;
	total.mins=(t1.mins+t2.mins)%Mins_per_hr;
	total.hours=(t1.hours+t2.hours)+(t1.mins+t2.mins)/Mins_per_hr;
	
	return total;
	}
	
void show_time(travel_time t)
{
	cout<<t.hours<<" godzin, "<<t.mins<<" minut"<<endl;
}
