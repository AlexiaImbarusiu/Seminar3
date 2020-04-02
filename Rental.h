#pragma once
//
// Created by holom on 02.04.2020.
//
#include <vector>
#include "Kunde.h"
#include "Wagen.h"
#include "LKW.h"
#include "PKW.h"
#ifndef SEM3_RENTAL_H
#define SEM3_RENTAL_H

using namespace std;
class Rental {
public:
    vector<Kunde> kunden;
    vector<Wagen*> autos;

    //virtual void load(int gew) = 0;
    void add_clients(const Kunde& kunde);
    void add_auto(Wagen *aut);
    void show_autos();

    void delete_clients(int id);

    void delete_autos(int id);

    void update_client(int id, const string &new_name);
};


#endif //SEM3_RENTAL_H
