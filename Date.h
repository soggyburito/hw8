#ifndef Date_h
#define Date_h
/*benjamin stanley
r01209581
crn 23322
I certify that this submission is my own original work.*/

class Date{

public:
	Date(int y = 1900, int m = 1, int d = 1);
	void print() const;
	void setDate(int y, int m, int d);
	int getYear()const;
	int getMonth() const;
	int getDay() const;
	bool equalDate(const Date obj) const;
	

private:
	int year;
	int month;
	int day;

};


#endif