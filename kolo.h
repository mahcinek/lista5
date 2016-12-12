//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_KOLO_H
#define LISTA_5_KOLO_H
#include <string>
#include "figura.h"
#include <iostream>

using namespace std;

class kolo : public figura{
public:
    string to_string ();
    double dField();
    double dObw();
    kolo (double promien);

private:
    double prom;



};


#endif //LISTA_5_KOLO_H
