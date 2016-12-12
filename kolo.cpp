//
// Created by pivekk on 06.12.2016.
//

#include "kolo.h"
#include <iostream>
#include <string>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;

string kolo::to_string() {
    return "Kolo o promieniu " + std::to_string(prom);
}



kolo::kolo(double promien) : prom(promien) {

}

double kolo::dField() {
    return prom*M_PI*prom;
}

double kolo::dObw() {
    return 2*prom*M_PI;

}

