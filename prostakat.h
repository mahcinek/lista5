//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_PROSTAKAT_H
#define LISTA_5_PROSTAKAT_H

#include <string>
#include "figura.h"
#include <iostream>

using namespace std;

class prostakat: public figura {
public:
    string to_string ();
    double dField();
    double dObw();
    prostakat (double first, double secound);

private:
    double firstlength;
    double seclength;
};


#endif //LISTA_5_PROSTAKAT_H
