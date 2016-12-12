//
// Created by pivekk on 07.12.2016.
//

#include "trProst.h"

trProst::trProst(double first, double sec, double third) {
    double przeciw = 5.0;
    double b1=3.0;
    double b2=4.0;
    if (first>sec)
        if (first>third) { przeciw=first; b1=sec;b2=third;}
        else {przeciw=third;b1=sec;b2=first;}
    else if (sec>third)
    {przeciw=sec; b1=first;b2=third;}
    else if (third>first){przeciw=third;b1=sec;b2=first;}
    if (b1*b1+b2*b2==przeciw*przeciw) {
    bok1=b2;
    przeciwprost=przeciw;
    bok2=b1;}
    else {
        bok1=3.0;
        przeciwprost=5.0;
        bok2=4.0;
    }

}

trProst::trProst(bool a, double przec, double sec, double third):figura(),przeciwprost(przec),bok2(third),bok1(sec) {
}

double trProst::dField() {
    return bok1*bok2/2;
}

double trProst::dObw() {
    return bok1+przeciwprost+bok2;
}

string trProst::to_string() {
    return "Trojkat prost o boku " + std::to_string(bok1)+ " i boku " + std::to_string(bok2)+ " i przeciwprostokatnej " + std::to_string(przeciwprost)+" i polu " + std::to_string(this->dField());
}
