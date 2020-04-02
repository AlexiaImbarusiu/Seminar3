#include <iostream>
#include "Rental.h"
template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}
int main() {
    Rental rental;
    rental.add_clients(Kunde(1,"Name1"));
    rental.add_clients(Kunde(2,"Name2"));
    rental.add_clients(Kunde(3,"Name3"));
    rental.add_auto(new LKW(3,"Marke","Mode",123,"bex"));
    rental.add_auto(new Wagen(1,"M","S"));
    rental.add_auto(new Wagen(2,"N","S"));
    /*for(auto iter=rental.autos.begin();iter<rental.autos.end();iter++){
        LKW *ptr1 = reinterpret_cast<LKW *>(&iter);
        if (instanceof<LKW>(ptr1)) {
            ptr1->load(12);
            std::cout<<(*iter)->idgetter();
        }
    }*/
    rental.delete_autos(3);
    rental.show_autos();

    return 0;
}
