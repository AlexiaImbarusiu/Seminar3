//
// Created by holom on 02.04.2020.
//

#ifndef SEM3_PKW_H
#define SEM3_PKW_H


#include "Wagen.h"

class PKW: public Wagen{
private:
    std::string sonder;
public:
    PKW(int id, std::string marke, std::string modell,std::string sonder) : Wagen(id, marke, modell)
    {
        sonder = sonder;
    };
};


#endif //SEM3_PKW_H
