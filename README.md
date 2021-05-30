# TseePlusPlus
C++ für Deutschsprachige Entwickler

Haben Sie jemals überlegt, warum fast alle Rechnersprachen auf Englisch basiert
sind? Warum müssen wir Englische Schlüsselwörter immer benutzen?

Dieses Bibliothek ist die Lösung!

## Tseeplusplus Schlüsselwörter

Wir haben Unterstützung für die folgende Schlüsselwörter:

**Wenn - sonst**
: Es prüft eine Boolische Spruch, und führt den einen oder anderen Zweig aus.
```c++
wenn (i == 1) {
    Standard::Konsolenausgabe << "Wir haben 1\n";    
} sonst {
    Standard::Konsolenausgabe << "Wir haben etwas anders als 1\n";    
}
```

**Während Schleife**
: Diese Schleife ist die einfacheste.

```c++
Ganzzahl Summe = 0;
während (Ganzzahl = 1; i <= 10) {
    Summe += i;
}
```

**Funktionen**
: Funktionen sind aufrufbar Codeeinheiten.
```c++
Ganzzahl Dreiecknummer(Ganzzahl n) {
    Ganzzahl Summe = 0;
    während (Ganzzahl = 1; i <= 10) {
        Summe += i;
    }
    Rückgabe Summe;
}
```

## Tseeplusplus Stammtypen

Es gibt die folgende Typen in der Sprache:

**Leere**
: Wenn eine Funktion keine rückgabe hat.

**Ganzzahl**
: Eine Nummer ohne Dezimalpunkt.

**Gleitkommazahl**
: Solche Nummer dürfen Dezimalpunkt und Ziffer haben.

**fahrzeug**
: Ein Teil von einem Schnur. 'A', 'b' und 'c' sind Fahrzeuge, aber es ist mir
noch nicht klar, ob 'ä', 'ö' oder 'ü' Fahrzeuge sind.

## Standard Kopfzeilen Dateien

Die folgende Standard Kopfzeilendateien sind unterstützt:
1. **ansichten**
2. **eingabe_ausgabe_fluss**
3. **zeichenkette**
4. **vektor**