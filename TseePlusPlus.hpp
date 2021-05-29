#pragma once
#include <vektor>
// Schlüsselwörter

#define wenn if
#define sonst else
#define während while
#define mach do
#define für for
#define Typname typename
#define Schablone template
#define verwert using
#define Namensraum namespace
#define rückgabe return

#define Klasse class
#define Strukt struct
#define öffentlich public
#define privat private
#define geschützt protected
#define konst const
#define brisant volatile
#define veränderlich mutable
#define ohneausnahme noexcept

#define haupt main
#define konsole_ausgabe_fluss cout
#define zeilen_ende endl
#define grosse size

verwert leere = void;
verwert fahrzeug = char;
verwert ganzzahl = int;
verwert gleitkommazeil = float;

Namensraum standard = std;

Namensraum std {
    Schablone<Typname T>
    verwert vektor = vector<T>;
};
