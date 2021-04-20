//
// Created by nitzan on 20/04/2021.
//

#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;
using namespace std;
double randi();
double randi()
{
    double num = (double) rand() / RAND_MAX;
    return 0.1 + num * 299.9;
}

TEST_CASE("Load file")
{
//    ifstream units_file{"units.txt"};
//    NumberWithUnits::read_units(units_file);
//    CHECK_EQ(num.read_units(units_file), true);
}

TEST_CASE("Equal operator - CM/M/KM")
{
    NumberWithUnits cm1{20,"cm"}; // 20cm == 0.2m == 0.0002km
    NumberWithUnits cm2{2000,"cm"}; // 2000cm == 20m == 0.02km
    NumberWithUnits cm3{20000,"cm"}; // 20,000cm == 2000m == 2km
    NumberWithUnits m1{0.2,"m"};
    NumberWithUnits m2{20,"m"};
    NumberWithUnits m3{2000,"m"};
    NumberWithUnits km1{0.0002,"km"};
    NumberWithUnits km2{0.02,"km"};
    NumberWithUnits km3{2,"km"};
    CHECK_EQ(1,1);
    CHECK_EQ(cm1,m1);
    CHECK_EQ(cm1,km1);
    CHECK_EQ(cm2,m2);
    CHECK_EQ(cm2,km2);
    CHECK_EQ(cm3,m3);
    CHECK_EQ(cm3,km3);
    CHECK_EQ(m1,km1);
    CHECK_EQ(m2,km2);
    CHECK_EQ(m3,km3);
}
TEST_CASE("Not equal operator - CM/M/KM")
{
    NumberWithUnits cm{2, "cm"};
    NumberWithUnits m{2, "m"};
    NumberWithUnits km{2, "km"};
    CHECK_NE(cm,m);
    CHECK_NE(cm,km);
    CHECK_NE(m,km);
}
TEST_CASE("+ Operator - CM/M/KM")
{
    NumberWithUnits cm{2, "cm"};
    NumberWithUnits m{2, "m"};
    NumberWithUnits km{2, "km"};
    NumberWithUnits num;
    num = cm+m+km;
    NumberWithUnits result{2.022,"km"};
    CHECK_EQ(num,result);
}

TEST_CASE("+= Operator - CM/M/KM")
{
    NumberWithUnits cm{2, "cm"};
    NumberWithUnits m{2, "m"};
    NumberWithUnits km{2, "km"};
    m+=cm;
    km+=m;
    NumberWithUnits result{2.022,"km"};
    CHECK_EQ(km,result);
}

TEST_CASE("- Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits m{2,"m"};
    NumberWithUnits km{2,"km"};
    NumberWithUnits num;
    num = km-m-cm;
    NumberWithUnits result{1.988,"km"};
    CHECK_EQ(num,result);
}
TEST_CASE("-= Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits m{2,"m"};
    NumberWithUnits km{2,"km"};
    m-=cm;
    km-=m;
    NumberWithUnits result{1.988,"km"};
    CHECK_EQ(km,result);
}

TEST_CASE("++ Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits m{2,"m"};
    NumberWithUnits km{2,"km"};
    cm++;
    NumberWithUnits three{3,"cm"};
    CHECK_EQ(cm,three);
    m++;
    three = NumberWithUnits{3,"m"};
    CHECK_EQ(m,three);
    km++;
    three = NumberWithUnits{3,"km"};
    CHECK_EQ(km,three);
}

TEST_CASE("-- Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits m{2,"m"};
    NumberWithUnits km{2,"km"};
    cm--;
    NumberWithUnits one{1,"cm"};
            CHECK_EQ(cm,one);
    m--;
    one = NumberWithUnits{1,"m"};
            CHECK_EQ(m,one);
    km--;
    one = NumberWithUnits{1,"km"};
            CHECK_EQ(km,one);
}
TEST_CASE("<, <= Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits m{2,"m"};
    NumberWithUnits km{2,"km"};
    CHECK_LT(cm,m);
    CHECK_LT(cm,km);
    CHECK_LT(m,km);
    cm = NumberWithUnits{200,"cm"};
    CHECK_LE(cm,m);
}
TEST_CASE(">, >= Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits m{2,"m"};
    NumberWithUnits km{2,"km"};
    CHECK_GT(km,m);
    CHECK_GT(km,cm);
    CHECK_GT(m,cm);
    cm = NumberWithUnits{200,"cm"};
    CHECK_GE(cm,m);
}

TEST_CASE(" * Operator - CM/M/KM")
{
    NumberWithUnits cm{2,"cm"};
    NumberWithUnits result{4,"cm"};
    cm = cm * 2;
    CHECK_EQ(cm,result);
}