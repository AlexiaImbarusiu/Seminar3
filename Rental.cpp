//
// Created by holom on 02.04.2020.
//

#include <iostream>
#include "Rental.h"

void Rental::add_clients(const Kunde& kunde) {
    kunden.push_back(kunde);
}

void Rental::add_auto(Wagen *aut) {
    autos.push_back(aut);
}

void Rental::update_client(int id, const std::string& new_name) {
    for(auto iter=kunden.begin();iter<kunden.end();iter++)
        if(iter->idgetter()==id)
            iter->namesetter(new_name);
}

void Rental::delete_clients(int id) {
    for(auto iter=kunden.begin();iter<kunden.end();iter++)
        if(iter->idgetter()==id)
            kunden.erase(iter);
}

void Rental::delete_autos(int id) {
    for(auto iter=autos.begin();iter<autos.end();iter++)
        if((*iter)->idgetter()==id)
            autos.erase(iter);

}
void Rental::show_autos() {
    for(auto iter=autos.begin();iter<autos.end();iter++)
        std::cout<<(*iter)->idgetter()<<" ";

}
