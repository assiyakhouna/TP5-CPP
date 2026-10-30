#include "Produit.hpp"

// Initialisation de l'attribut static avec 20%
float Produit::tauxTVA = 20.0;

// Constructeur
Produit::Produit(string n, float prix) {
    nom = n;
    prixHT = prix;
}

// Calcul du prix TTC
float Produit::getPrixTTC() const {
    return prixHT + (prixHT * tauxTVA / 100);
}

// Modification du taux TVA
void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}