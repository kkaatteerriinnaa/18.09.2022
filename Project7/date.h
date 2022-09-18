#pragma once
class Date
{
    int day;
    int month;
    int year;
public:
    Date();
    Date(int d);
    Date(int d, int m);
    Date(int d, int m, int y);
    void Print()const;
    void SetD(int t);
    void SetM(int t);
    void SetY(int t);
    void GetD();
    void GetM();
    void GetY();
    Date operator+(int a);
    Date operator-(int a);
    Date Kogitte(Date&);
    Date& operator+(const Date& a);
    Date& operator-(const Date& a);
    Date& operator+=(int a);
    Date& operator-=(int a);
    bool operator>(const Date& t);
    bool operator>=(const Date& t);
    bool operator<(const Date& t);
    bool operator<=(const Date& t);
    bool operator==(const Date& t);
    bool operator!=(const Date& t);
};

