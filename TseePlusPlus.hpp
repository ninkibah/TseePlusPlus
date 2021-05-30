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
#define Rückgabe return

#define Klasse class
#define Strukt struct
#define öffentlich public
#define privat private
#define geschützt protected
#define konst const
#define brisant volatile
#define veränderlich mutable
#define ohne_ausnahme noexcept

#define Haupt main
#define Konsolenausgabe_fluss cout
#define Zeilenende endl
#define Größe size

#define Protest assert
#define Konstausdruck constexpr
#define Statischerprotest static_assert
#define statisch static

#define Größe_von sizeof

verwert Leere = void;
verwert Zeichen = char;
verwert Ganzzahl = int;
verwert Gleitkommazeil = float;

Namensraum Standard = std;

Namensraum std {
    Schablone<Typname T>
    verwert vektor = vector<T>;
};
