//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_FIGURA_H
#define LISTA_5_FIGURA_H

using namespace std;
#include <string>

class figura {
public:
    virtual std::string to_string()=0;
    virtual double dField()= 0;
     virtual double dObw()= 0;

};


#endif //LISTA_5_FIGURA_H
