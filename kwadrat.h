//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_KWADRAT_H
#define LISTA_5_KWADRAT_H


#include "figura.h"
#include <iostream>

using namespace std;

class kwadrat : public figura{
public:
    string to_string ();
    double dField();
    double dObw();
    kwadrat(double f);

private:
    double bok;
};


#endif //LISTA_5_KWADRAT_H
