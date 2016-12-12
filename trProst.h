//
// Created by pivekk on 07.12.2016.
//

#ifndef LISTA_5_TRPROST_H
#define LISTA_5_TRPROST_H
#include <string>
#include "figura.h"
#include <iostream>

class trProst: public figura {
public:
    trProst(bool a, double przec, double sec, double third);

    string to_string ();
    double dField();
    double dObw();
    trProst(double first,double sec,double third);
    //trProst (bool a,double przec,double sec,double third);
private:
    double bok1;
    double bok2;
    double przeciwprost;




};


#endif //LISTA_5_TRPROST_H
