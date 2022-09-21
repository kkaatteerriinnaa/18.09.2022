#pragma once
#include "date.h"
#include <iostream>
using namespace std;

Date& operator--(Date& obj)
{
    obj.SetD(obj.GetD() - 1);
    obj.Kogitte(obj);
    return obj;
}
Date& operator--(Date& obj, int x)
{
    Date buff(obj);
    obj.SetD(obj.GetD() - 1);
    obj.Kogitte(obj);
    return buff;
}
Date& operator++(Date& obj)
{
    obj.SetD(obj.GetD() + 1);
    obj.Kogitte(obj);
    return obj;
}
Date& operator++(Date& obj, int x)
{
    Date buff(obj);
    obj.SetD(obj.GetD() + 1);
    obj.Kogitte(obj);
    return buff;
}

Date& operator+(int x, const Date& obj)
{
    Date buff;
    buff.SetD(obj.GetD() + x);
    buff.SetM(obj.GetM());
    buff.SetY(obj.GetY());
    buff.Kogitte(buff);
    return buff;
}
Date& operator-(int x, const Date& obj)
{
    Date buff;
    buff.SetD(obj.GetD() - x);
    buff.SetM(obj.GetM());
    buff.SetY(obj.GetY());
    buff.Kogitte(buff);
    return buff;
}
Date& operator-(const Date& a, const Date& b)
{
    Date buff;
    buff.SetD(a.GetD() - b.GetD());
    buff.SetM(a.GetM() - b.GetM());
    buff.SetY(a.GetY() - b.GetY());
    buff.Kogitte(buff);
    return buff;
}
Date& operator+(const Date& a, const Date& b)
{
    Date buff;
    buff.SetD(a.GetD() + b.GetD());
    buff.SetM(a.GetM() + b.GetM());
    buff.SetY(a.GetY() + b.GetY());
    buff.Kogitte(buff);
    return buff;
}
Date& operator+=(Date& obj, int a)
{
    obj.SetD(obj.GetD() + a);
    obj.Kogitte(obj);
    return obj;
}
Date& operator-=(Date& obj, int a)
{
    obj.SetD(obj.GetD() - a);
    obj.Kogitte(obj);
    return obj;
}
bool operator>(const Date& a, const Date& t)
{
    if (a.GetY() > t.GetY())
    {
        return true;
    }
    else if (a.GetY() == t.GetY())
    {
        if (a.GetM() > t.GetM())
        {
            return true;
        }
        else if (a.GetM() == t.GetM())
        {
            if (a.GetD() > t.GetD())
            {
                return true;
            }
        }
    }
    return false;
}
bool operator>=(const Date& a, const Date& t)
{
    if (a.GetY() > t.GetY())
    {
        return true;
    }
    else if (a.GetY() == t.GetY())
    {
        if (a.GetM() > t.GetM())
        {
            return true;
        }
        else if (a.GetM() == t.GetM())
        {
            if (a.GetD() > t.GetD())
            {
                return true;
            }
            else if (a.GetD() == t.GetD())
            {
                return true;

            }
        }
    }
    return false;
}
bool operator<(const Date& a, const Date& t)
{
    if (a.GetY() < t.GetY())
    {
        return true;
    }
    else if (a.GetY() == t.GetY())
    {
        if (a.GetM() < t.GetM())
        {
            return true;
        }
        else if (a.GetM() == t.GetM())
        {
            if (a.GetD() < t.GetD())
            {
                return true;
            }
        }
    }
    return false;
}
bool operator<=(const Date& a, const Date& t)
{
    if (a.GetY() < t.GetY())
    {
        return true;
    }
    else if (a.GetY() == t.GetY())
    {
        if (a.GetM() < t.GetM())
        {
            return true;
        }
        else if (a.GetM() == t.GetM())
        {
            if (a.GetD() < t.GetD())
            {
                return true;
            }
            else if (a.GetD() == t.GetD())
            {
                return true;

            }
        }
    }
    return false;
}
bool operator==(const Date& a, const Date& t)
{
    if (a.GetY() == t.GetY() && a.GetM() == t.GetM() && a.GetD() == t.GetD())
        return true;
    else
        return false;
}
bool operator!=(const Date& a, const Date& t)
{
    if (a.GetY() != t.GetY() && a.GetM() != t.GetM() && a.GetD() != t.GetD())
        return true;
    else
        return false;
}