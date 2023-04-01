#include <iostream>
#include <cstring>
using namespace std;

class Date {
	int year;
	int month;
	int day;

public:
	Date(int a, int b, int c) {
		year = a;
		month = b;
		day = c;
	}
	Date(string a) {
		int check, check1;
		char date[100];

		strcpy(date, a.c_str());

		for (int i = 0; i < strlen(a.c_str()); i++) {
			if (date[i] == '/') {
				if (i == 5) {
					check = i;
				}
				else {
					check1 = i;
				}
			}
		}

		for(int i = 0; i <)
			//해결 실패
	}
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}