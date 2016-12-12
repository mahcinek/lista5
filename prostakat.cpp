//
// Created by pivekk on 06.12.2016.
//

#include "prostakat.h"
#include <iostream>

using namespace std;



prostakat::prostakat(double first, double secound):firstlength(first),seclength(secound) {
}

string prostakat::to_string() {
    return "Prostakat o boku " + std::to_string(firstlength)+ " i boku " + std::to_string(seclength);

}

double prostakat::dField() {
    return firstlength*seclength;

}

double prostakat::dObw() {
    return 2*firstlength+2*seclength;

}
