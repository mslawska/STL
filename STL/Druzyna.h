#pragma once
#include <iostream>
#include <algorithm>
using namespace std;
class druzyna
{
public:
    string nazwa;
    int wygrane;
    int remisy;
    int przegrane;
    int gole;
    int straconeBramki;

    druzyna(string naz, int wyg, int rem, int prz, int gol, int stracone) {
        nazwa = naz;
        wygrane = wyg;
        remisy = rem;
        przegrane = prz;
        gole = gol;
        straconeBramki = stracone;
    }
    friend ostream& operator<<(ostream& os, druzyna& c) {
        os << c.nazwa << "\t" << "\033[1;32m" << c.wygrane << "\033[0m\t" << c.remisy << "\t" << "\033[1;31m" << c.przegrane << "\033[0m\t" << "\033[1;32m" << c.gole << "\033[0m\t" << "\033[1;31m" << c.straconeBramki << "\033[0m\t" << c.punkty() << endl;
        return os;
    }


    int punkty() {
        return (wygrane * 3) + remisy;
    }
};

bool porownajDruzyny(druzyna& druzyna1, druzyna& druzyna2) {
    if (druzyna1.punkty() != druzyna2.punkty()) {
        return druzyna1.punkty() > druzyna2.punkty();
    }
    else {
        if (druzyna1.wygrane != druzyna2.wygrane) {
            return druzyna1.wygrane > druzyna2.wygrane;
        }
        else {
            if (druzyna1.przegrane != druzyna2.przegrane) {
                return druzyna1.przegrane < druzyna2.przegrane;
            }
            else {
                if (druzyna1.gole != druzyna2.gole) {
                    return druzyna1.gole > druzyna2.gole;
                }
                else {
                    return druzyna1.straconeBramki < druzyna2.straconeBramki;
                }
            }
        }
    }

}