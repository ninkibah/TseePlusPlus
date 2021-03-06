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
#define nutze using
#define Namensraum namespace
#define rückgabe return

#define der auto
#define die auto
#define das auto

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

nutze leere = void;
nutze fahrzeug = char;
nutze ganzzahl = int;
nutze gleitkommazeil = float;

Namensraum standard = std;

Namensraum std {
    Schablone<Typname T>
    nutze vektor = vector<T>;
};
