#pragma once
//
// Created by holom on 02.04.2020.
//

#ifndef SEM3_LKW_H
#define SEM3_LKW_H


#include "Wagen.h"

class LKW: public Wagen {
private:
    int gesamtgewicht;
    std::string bezeichnung;

public:
    LKW(int id, std::string marke, std::string modell, int gesamt, std::string bez) : Wagen(id, marke, modell) {
        gesamtgewicht=gesamt;
        bezeichnung=bez;
    }
    virtual void load(int gew){ gesamtgewicht+=gew;};
    void unload(){ gesamtgewicht = 0;};
};


#endif //SEM3_LKW_H
