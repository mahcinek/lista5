//
// Created by pivekk on 06.12.2016.
//

#include "trapez.h"
#include <iostream>

using namespace std;

trapez::trapez(double p1, double p2, double b1, double b2,double wys):podst1(p1),podst2(p2),bok1(b1),bok2(b2),wys(wys) {

}

string trapez::to_string() {
    return "trapez o podst1 " + std::to_string(podst1)+ " podst2 " + std::to_string(podst2)+ " boku1 " + std::to_string(bok1)+ " boku2 " + std::to_string(bok2)+ " i wysokosci " + std::to_string(wys);
}

double trapez::dField() {
    return ((podst1+podst2)*wys)/2;

}

double trapez::dObw() {
    return podst1+podst2+bok1+bok2;
}
