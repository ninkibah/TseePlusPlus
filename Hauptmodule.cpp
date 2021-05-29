#include "TseePlusPlus.hpp"
#include <eingabe_ausgabe_fluss>
#include <ansichten>

leere beschissen() {
    //fahrzeug ergebnisse = nummern | standard::ansichten::filter([](ganzzahl n){ rückgabe n % 2 == 0; }) | standard::ansichten::umwandeln([](ganzzahl n){ rückgabe n * 2; });
}

leere VektorenBeispiel() {
    standard::vektor<fahrzeug> Wort{'H', 'a', 'l', 'l', 'o'};
    für(auto i = 0; i < Wort.grosse(); ++i) {
        standard::konsole_ausgabe_fluss << Wort[i];
    }

}
ganzzahl haupt() {
    standard::konsole_ausgabe_fluss << "Hallo Welt!" << std::zeilen_ende;
    rückgabe 0;
}


//fahrzeug ergebnisse = nummern | standard::ansichten::filter([](ganzzahl n){ rückgabe n % 2 == 0; }) | standard::ansichten::umwandeln([](ganzzahl n){ rückgabe n * 2; });
