//
// Created by Bryce Sulin on 2/17/18.
//

#ifndef REGULARPENTAGON_GEOMETRICOBJECT_H
#define REGULARPENTAGON_GEOMETRICOBJECT_H

#include <string>

using namespace std;

class geometricobject {
public:
    geometricobject(string name);
    string getname();
    virtual double getarea() = 0;
    virtual double getperimeter() = 0;

private:
    string name_string;
};
#endif //REGULARPENTAGON_GEOMETRICOBJECT_H