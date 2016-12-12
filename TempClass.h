//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_TEMPCLASS_H
#define LISTA_5_TEMPCLASS_H


template <class T,int i> // szablon klasy ma 2 parametry
class TempClass // 1-szy typ T, 2-gi wartość typu int
{ // Wartością aktualną T może być dowolny typ
public: // Wartością aktualną i może być stały int
    TempClass(T array[],int dl):Tarray(array),arraysize(dl) {
    }

    ~TempClass(){
        delete Tarray;
    };

    T sum(){
        T licznik;
        for (int j = 0; j < i; j++) {
            licznik+=Tarray[j];
        }
        return licznik;
    };

private:
    T Tarray[i];
    int arraysize;
};
#endif //LISTA_5_TEMPCLASS_H
