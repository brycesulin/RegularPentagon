/*
 * File:   main.cpp
 * Author: hansen
 *
 * Created on February 16, 2013, 5:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include "regularpentagon.h"
#include "geometricobject.h"

using namespace std;

int main () {

    regularpentagon s1(5);

    cout << "Regular Pentagon with side: " << s1.getside() << " area: " << s1.getarea()
         << " and perimeter " << s1.getperimeter() << endl;

    cout << s1.getname() << endl;


//    vector<geometricobject*> myvector;
//
//    myvector.push_back(new regularpentagon(5));
//    //myvector.push_back(new square(1, "Fred"));
//    //myvector.push_back(new righttriangle(3, 4, 5));
//    //myvector.push_back(new righttriangle(5, 12, 13, "Wilma"));
//
//    for (int i=0; i<myvector.size(); i++) {
//        geometricobject* geo = myvector[i];
//        cout << geo->getname() << " " << geo->getarea()
//             << " " << geo->getperimeter() << endl;
//    }

    return 0;
}



