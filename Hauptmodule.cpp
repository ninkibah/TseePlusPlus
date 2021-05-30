#include "TseePlusPlus.hpp"
#include <eingabe_ausgabe_fluss>
#include <ansichten>

Leere beschissen()
{
    //fahrzeug ergebnisse = nummern | standard::ansichten::filter([](ganzzahl n){ rückgabe n % 2 == 0; }) | standard::ansichten::umwandeln([](ganzzahl n){ rückgabe n * 2; });
}

Leere VektorenBeispiel()
{
    Standard::Vektor<Zeichen> Wort{'H', 'a', 'l', 'l', 'o'};
    für(automatisch i = 0; i < Wort.Größe(); ++i)
    {
        Standard::Konsolenausgabe << Wort[i];
    }
}
Ganzzahl Haupt()
{
    Standard::Zeichenkette Grüße{"Hallo Welt!"};

    Standard::Konsolenausgabe << Grüße << std::Zeilenende;
    Rückgabe 0;
}

//fahrzeug ergebnisse = nummern | standard::ansichten::filter([](ganzzahl n){ rückgabe n % 2 == 0; }) | standard::ansichten::umwandeln([](ganzzahl n){ rückgabe n * 2; });
