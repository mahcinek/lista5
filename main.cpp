#include <iostream>
#include "figura.h"
#include "kolo.h"
#include "prostakat.h"
#include "trapez.h"
#include "kwadrat.h"
#include "trProst.h"
#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>
#include <stdlib.h>

void showAll(figura *tab[],int dl){
    for (int i=0;i<dl;i++){
        if  (tab[i]== nullptr)continue;
        cout<<tab[i]->to_string()<<endl;}
}
double sumOfAreas (figura *tab[],int dl)
{
    double licznik=0.0;
    for (int i=0;i<dl;i++){
        if  (tab[i]== nullptr)continue;
        licznik+=tab[i]->dField();}
    return licznik;
}
double sumOfPerimeters (figura *tab[],int dl)
{
    double licznik=0.0;
    for (int i=0;i<dl;i++){
        if  (tab[i]== nullptr)continue;
        licznik+=tab[i]->dObw();}
    return licznik;
}

int main() {
    int ile;
    int iVal1 = -1;
    double iVal2 =-1;
    double iVal3=-1;
    double iVal4=-1;
    double iVal5=-1;
    double iVal6=-1;
    cout<<"podaj wielkosc"<<endl;
    cin>>ile;

    figura *ptr[ile];
    string command;
    for (int i=0;i<ile;i++){
        ptr[i]= nullptr;
    }
    bool menu=true;
    while (menu) {
    cout << "Podaj komende:" << endl;
    std::cin.sync();
    std::getline(std::cin, command);
    stringstream ss(command);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string> vstrings(begin, end);
    copy(vstrings.begin(), vstrings.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
    string sCommnad = vstrings[0];
    if (sCommnad == "!createTrapeze") {
        if (vstrings.capacity()<5) cout<<"ERROR"<<endl;
        else{
            iVal3 = stod(vstrings[3].c_str());
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stod(vstrings[2].c_str());
            iVal4=stod(vstrings[4].c_str());
            iVal5=stod(vstrings[5].c_str());
            iVal6=stod(vstrings[6].c_str());


            if (ptr[iVal1]!= nullptr) delete ptr[iVal1];
            ptr[iVal1] = new trapez (iVal2,iVal3,iVal4,iVal5,iVal6);}
        vstrings.clear();
        continue;
    }
        if (sCommnad == "!createSquare") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{

                iVal1 = stoi(vstrings[1].c_str());
                iVal2 = stod(vstrings[2].c_str());

                if (ptr[iVal1]!= nullptr) delete ptr[iVal1];
                ptr[iVal1] = new kwadrat (iVal2);}
            vstrings.clear();
            continue;
        }
        if (sCommnad == "!show") {
            if (vstrings.capacity()<1) cout<<"ERROR"<<endl;
            else{

                iVal1 = stoi(vstrings[1].c_str());

                cout<<ptr[iVal1]->to_string()<<endl; }
            vstrings.clear();
            continue;
        }

        if (sCommnad == "!createRectangle") {
            if (vstrings.capacity()<5) cout<<"ERROR"<<endl;
            else{
                iVal3 = stod(vstrings[3].c_str());
                iVal1 = stoi(vstrings[1].c_str());
                iVal2 = stod(vstrings[2].c_str());
                if (ptr[iVal1]!= nullptr) delete ptr[iVal1];
                ptr[iVal1] = new prostakat (iVal2,iVal3);}
            vstrings.clear();
            continue;
        }
        if (sCommnad == "!createCircle") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{

                iVal1 = stoi(vstrings[1].c_str());
                iVal2 = stod(vstrings[2].c_str());
                if (ptr[iVal1]!= nullptr) delete ptr[iVal1];
                ptr[iVal1] = new kolo (iVal2);}
            vstrings.clear();
            continue;
        }
        if (sCommnad == "!createTr") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{

                iVal1 = stoi(vstrings[1].c_str());
                iVal2 = stod(vstrings[2].c_str());
                iVal3 = stod(vstrings[3].c_str());
                iVal4 = stod(vstrings[4].c_str());
                if (ptr[iVal1]!= nullptr) delete ptr[iVal1];
                ptr[iVal1] = new trProst (iVal2,iVal3,iVal4);}
            vstrings.clear();
            continue;
        }
        if (sCommnad == "!showAll") {
            showAll(ptr,ile);
            vstrings.clear();
            continue;
        }
        if (sCommnad == "!sumA") {
            cout<<sumOfAreas(ptr,ile)<<endl;
            vstrings.clear();
            continue;
        }
        if (sCommnad == "!sumP") {
            cout<<sumOfPerimeters(ptr,ile)<<endl;
            vstrings.clear();
            continue;
        }

    else if (sCommnad == "exit") {
        menu= false;
        vstrings.clear();
        continue;
    }
    else
    {
        cout<<"Zla komenda"<<endl;
        vstrings.clear();
        continue;
    }


}
    /*ptr[0]=new kolo(2.0);
    ptr[1]=new prostakat(1.0,3.0);
    ptr[2]=new trapez (1.0,2.0,1.0,1.3,1.0);
    showAll(ptr,3);*/

    return 0;
}