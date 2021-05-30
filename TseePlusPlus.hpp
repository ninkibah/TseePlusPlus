#pragma once
#include <vektor>
#include <zeichenkette>
// Schlüsselwörter

#define wenn if
#define sonst else
#define während while
#define mach do
#define für for
#define Typname typename
#define Schablone template
#define verwende using
#define Namensraum namespace
#define Rückgabe return
#define automatisch auto

#define Klasse class
#define Strukt struct
#define öffentlich public
#define privat private
#define geschützt protected
#define konst const
#define brisant volatile
#define veränderlich mutable
#define ohne_Ausnahme noexcept

#define Haupt main
#define Konsolenausgabe cout
#define Zeilenende endl
#define Größe size

#define Protest assert
#define Konstausdruck constexpr
#define Statischerprotest static_assert
#define statisch static

#define Größe_von sizeof

verwende Leere = void;
verwende Zeichen = char;
verwende Ganzzahl = int;
verwende Gleitkommazeil = float;

Namensraum Standard = std;

Namensraum std
{
    Schablone<Typname T>
        verwende Vektor = vector<T>;

    verwende Zeichenkette = string;
};
