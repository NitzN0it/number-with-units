//
// Created by nitzan on 20/04/2021.
//

#include "NumberWithUnits.hpp"
#include <string>
#include <iostream>

using namespace ariel;
using namespace std;
    NumberWithUnits numberOne(15,"m");

    void NumberWithUnits::read_units(ifstream& fl)
    {

    }
    NumberWithUnits NumberWithUnits::operator + (NumberWithUnits num2)
    {
        return numberOne;
    }
    NumberWithUnits NumberWithUnits::operator - (NumberWithUnits num2)
    {
        return numberOne;
    }
    NumberWithUnits NumberWithUnits::operator - ()
    {
        return numberOne;
    }
    NumberWithUnits& NumberWithUnits::operator += (const NumberWithUnits& num)
    {
        return numberOne;
    }
    NumberWithUnits& NumberWithUnits::operator -= (const NumberWithUnits& num)
    {
        return numberOne;
    }
    const NumberWithUnits ariel::operator*(const NumberWithUnits num1, const double& num2)
    {
        return numberOne;
    }
    const NumberWithUnits ariel::operator*(const double& num1, const NumberWithUnits num2)
    {
        return numberOne;
    }
    bool NumberWithUnits::operator > (const NumberWithUnits& num2) const
    {
        return true;
    }
    bool NumberWithUnits::operator >= (const NumberWithUnits& num2) const
    {
        return true;
    }
    bool NumberWithUnits::operator < (const NumberWithUnits& num2) const
    {
        return true;
    }
    bool NumberWithUnits::operator <= (const NumberWithUnits& num2) const
    {
        return true;
    }
    bool NumberWithUnits::operator != (const NumberWithUnits& num2) const
    {
        return true;
    }
    bool NumberWithUnits::operator == (const NumberWithUnits& num2) const
    {
        return true;
    }
    NumberWithUnits NumberWithUnits::operator ++()
    {
        return numberOne;
    }
    NumberWithUnits NumberWithUnits::operator ++(int dum)
    {
        return numberOne;
    }
    NumberWithUnits NumberWithUnits::operator --()
    {
        return numberOne;
    }
    NumberWithUnits NumberWithUnits::operator --(int dum)
    {
        return numberOne;
    }
    ostream& ariel::operator << (ostream& os, const NumberWithUnits num)
    {
        return os;
    }
    istream& ariel::operator >> (istream& is, NumberWithUnits num)
    {
        return is;
    }