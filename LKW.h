//
// Created by holom on 02.04.2020.
//

#ifndef SEM3_LKW_H
#define SEM3_LKW_H


#include "Wagen.h"

class LKW: protected Wagen {
private:
    int gesamtgewicht;
    std::string bezeichnung;

public:
    LKW(int id, std::string marke, std::string modell) : Wagen(id, marke, modell) {
        
    }
    void load(int gew){ gesamtgewicht+=gew;};
    void unload(){ gesamtgewicht = 0;};
};


#endif //SEM3_LKW_H
