#include <iostream>
#include "Date.h"
using namespace std;
/*benjamin stanley
r01209581
crn 23322
I certify that this submission is my own original work.*/

Date::Date(int y , int m, int d ){
	year = 1900;
	month = 1;
	day = 1;
}

void Date::setDate(int y, int m, int d){
	if (y >= 1900 && y <= 2015){
		year = y;
	}
	else{
		year = 1900;
	}

	if (m >= 1 && m <= 12){
		month = m;
	}
	else{
		month = 1;
	}

	if (m == 2){
		if (d <= 1 && d <= 28){
			day = d;
		}
		else{
			day = 1;
		}
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11){
		if (d >= 1 && d <= 30){
			day = d;
		}
		else{
			day = 1;
		}
	}
	else{
		if (d >= 1 && d <= 31){
			day = d;
		}
		else{
			day = 1;
		}
	}
}

int Date::getYear()const{
	return year;
}

int Date::getMonth() const{
	return month;
}

int Date::getDay() const{
	return day;
}

bool Date::equalDate(const Date obj) const{
	if (year == obj.getYear() && month == obj.getMonth() && day == obj.getDay()){
		return true;
	}
	else{
		return false;
	}
}

void Date::print() const{
	cout << year << "/" << month << "/" << day << endl;
}