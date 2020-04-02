//
// Created by holom on 02.04.2020.
//

#ifndef SEM3_KUNDE_H
#define SEM3_KUNDE_H


#include <string>
#include <utility>

class Kunde {
private:
    int id;
    std::string name;

public:
    void idsetter(int value){ id = value;};
    int idgetter(){ return id;};

    void namesetter(std::string value){ name = std::move(value); };
    std::string namegetter(){ return name; };

    Kunde(int id, std::string name){
        idsetter(id);
        namesetter(std::move(name));
    }

};


#endif //SEM3_KUNDE_H
