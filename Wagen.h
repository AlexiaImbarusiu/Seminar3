//
// Created by holom on 02.04.2020.
//

#ifndef SEM3_WAGEN_H
#define SEM3_WAGEN_H


#include <string>

class Wagen {

private:
    int id;
    std::string marke, modell;

public:
    void idsetter(int value){ id = value;};
    int idgetter(){ return id;};

    void markesetter(std::string value){ marke = std::move(value); };
    std::string markegetter(){ return marke; };

    void modellsetter(std::string value){ modell = std::move(value); };
    std::string modellgetter(){ return modell; };

    Wagen(int id, std::string marke, std::string modell){
        idsetter(id);
        markesetter(std::move(marke));
        modellsetter(std::move(modell));
    }

};


#endif //SEM3_WAGEN_H
