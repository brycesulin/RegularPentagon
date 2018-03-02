/**
 * File: regularpentagon.cpp
 * Author: Bryce Sulin
 *
 * This file contains the attributes of a regular pentagon
 */
#include <iostream>
#include <cmath>
#include "regularpentagon.h"
using namespace std;

regularpentagon::regularpentagon(double s, string name)
        : geometricobject (name)
{
    side = s;
}

double regularpentagon::getarea() {
    return 0.25 * sqrt(5*(5+2*sqrt(5))) * (side * side);
}

double regularpentagon::getperimeter() {
    return 5 * side;
}

double regularpentagon::getside() {
    return side;
};