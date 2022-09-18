#include "date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	day = month = year = 0;
}

Date::Date(int d)
{
	day = d;
	month = year = 0;
}

Date::Date(int d, int m) :Date(d)
{
	month = m;
	year = 0;
}

Date::Date(int d, int m, int y) :Date(d, m)
{
	year = y;
}

void Date::Print()const
{
	if (month < 10)
		cout << day << "/0" << month << "/" << year << endl;
	else
		cout << day << "/" << month << "/" << year << endl;
}

void Date::SetD(int t)
{
	cout << "Day = ";
	cin >> day;
}

void Date::SetM(int t)
{
	cout << "Month = ";
	cin >> month;
}

void Date::SetY(int t)
{
	cout << "Year = ";
	cin >> year;
}

void Date::GetD()
{
	cout << "Day: " << day << endl;
}

void Date::GetM()
{
	if (month < 10)
		cout << "Month: 0" << month << endl;
	else
		cout << "Month: " << month << endl;
}

void Date::GetY()
{
	cout << "Year: " << year << endl;
}

Date Date::operator+(int a)
{
	Date temp;
	temp.day = day + a;
	temp.month = month;
	temp.year = year;
	Kogitte(temp);
	return temp;
}

Date Date::operator-(int a)
{
	Date temp;
	temp.day = day - a;
	temp.month = month;
	temp.year = year;
	Kogitte(temp);
	return temp;
}



Date Date::Kogitte(Date& temp)
{
	while (true)
	{
		if (temp.year % 4 == 0)
		{
			if (temp.month == 2 && temp.day > 29)
			{
				temp.month++;
				temp.day -= 29;
				return temp;
			}
		}
		if (temp.month == 1 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 2 && temp.day > 28)
		{
			temp.month++;
			temp.day -= 28;
		}
		else if (temp.month == 3 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 4 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 5 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 6 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 7 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 8 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 9 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 10 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 11 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 12 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		if (temp.year % 4 == 0)
		{
			if (temp.month == 2 && temp.day <= 0)
			{
				temp.month--;
				temp.day += 29;
				return temp;
			}
		}
		if (temp.month == 1 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 2 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 28;
		}
		else if (temp.month == 3 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 4 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 5 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 6 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 7 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 8 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 9 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 10 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 11 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 12 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		if (temp.month <= 0)
		{
			temp.year--;
			temp.month += 12;
		}
		else if (temp.month > 12)
		{
			temp.year++;
			temp.month -= 12;
		}
		else if (temp.day > 0 && temp.day < 32 && temp.month > 0 && temp.month < 13)
			break;
	}
	return temp;

}

Date& Date::operator+(const Date& a)
{
	day += a.day;
	month += a.month;
	year += a.year;
	Kogitte(*this);
	return *this;
}

Date& Date::operator-(const Date& a)
{
	day -= a.day;
	month -= a.month;
	year -= a.year;
	Kogitte(*this);
	return *this;
}

Date& Date::operator+=(int a)
{
	day += a;
	Kogitte(*this);
	return *this;
}

Date& Date::operator-=(int a)
{
	day -= a;
	Kogitte(*this);
	return *this;
}

bool Date::operator>(const Date& t)
{
	if (year > t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month > t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day > t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator>=(const Date& t)
{
	if (year > t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month > t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day > t.day)
			{
				return true;
			}
			else if (day == t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<(const Date& t)
{
	if (year < t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month < t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day < t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<=(const Date& t)
{
	if (year < t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month < t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day < t.day)
			{
				return true;
			}
			else if (day == t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator==(const Date& t)
{
	if (year == t.year && month == t.month && day == t.day)
		return true;
	else
		return false;
}

bool Date::operator!=(const Date& t)
{
	if (year != t.year && month != t.month && day != t.day)
		return true;
	else
		return false;
}