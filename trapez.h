//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_TRAPEZ_H
#define LISTA_5_TRAPEZ_H

#include <string>
#include "figura.h"
#include <iostream>

using namespace std;

class trapez: public figura {
public:
    string to_string ();
    double dField();
    double dObw();
    trapez (double p1,double p2,double b1,double b2,double wys);

private:
    double podst1;
    double podst2;
    double bok1;
    double bok2;
    double wys;

};


#endif //LISTA_5_TRAPEZ_H
