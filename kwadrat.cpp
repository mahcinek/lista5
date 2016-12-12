//
// Created by pivekk on 06.12.2016.
//

#include "kwadrat.h"
#include <iostream>

using namespace std;

string kwadrat::to_string() {
    return "Kwadrat o boku" + std::to_string(bok);
}

kwadrat::kwadrat(double f) : bok(f) {
}

double kwadrat::dObw() {
    return bok*4;

}

double kwadrat::dField() {
    return bok*bok;

}

