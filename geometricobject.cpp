/*
 * File:   geometricobject.cpp
 * Author: hansen
 *
 * Created on February 16, 2013, 5:07 PM
 */

#include "geometricobject.h"

geometricobject::geometricobject(string name) {
    name_string = name;
}

string geometricobject::getname() {
    return name_string;
}

