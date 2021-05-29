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
    standard::konsole_ausgabe << "Wir haben 1\n";    
} sonst {
    standard::konsole_ausgabe << "Wir haben etwas anders als 1\n";    
}
```

**Während Schleife**
: Diese Schleife ist die einfacheste.

```c++
ganzzahl Summe = 0;
während (ganzzahl = 1; i <= 10) {
    Summe += i;
}
```

**Funktionen**
: Funktionen sind aufrufbar Codeeinheiten.
```c++
ganzzahl dreiecknummer(ganzzahl n) {
    ganzzahl Summe = 0;
    während (ganzzahl = 1; i <= 10) {
        Summe += i;
    }
    rückgabe Summe;
}
```

## Tseeplusplus Stammtypen

Es gibt die folgende Typen in der Sprache:

**leere**
: Wenn eine Funktion keine rückgabe hat.

**ganzzahl**
: Eine Nummer ohne Dezimalpunkt.

**gleitkommazeil**
: Solche Nummer dürfen Dezimalpunkt und Ziffer haben.

**fahrzeug**
: Ein Teil von einem Schnur. 'A', 'b' und 'c' sind Fahrzeuge, aber es ist mir
noch nicht klar, ob 'ä', 'ö' oder 'ü' Fahrzeuge sind.

## Standard Kopfzeilen Dateien

Die folgende Standard Kopfzeilendateien sind unterstützt:
1. **ansichten**
2. **eingabe_ausgabe_fluss**
3. **schnur**
4. **vektor**