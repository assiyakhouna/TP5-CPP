#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    float prixHT;
    static float tauxTVA;

public:
    Produit(string n, float prix);

    float getPrixTTC() const;

    static void modifierTVA(float nouveauTaux);
};

#endif