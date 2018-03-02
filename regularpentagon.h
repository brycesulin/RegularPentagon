/**
 * File: regularpentagon.h
 * Author: Bryce Sulin
 *
 * Created by Bryce Sulin on 2/17/18
 */

#ifndef REGULARPENTAGON_REGULARPENTAGON_H
#define REGULARPENTAGON_REGULARPENTAGON_H

#include <string>
#include "geometricobject.h"

class regularpentagon : public geometricobject {
public:
    regularpentagon(double s, string name = "Regular Pentagon");
    double getarea();
    double getperimeter();
    double getside();

private:
    double side;
};

#endif //REGULARPENTAGON_REGULARPENTAGON_H