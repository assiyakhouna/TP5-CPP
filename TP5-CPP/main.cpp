#include <iostream>
#include "Produit.hpp"
using namespace std;

int main() {

    // Création de plusieurs produits
    Produit p1("Ordinateur", 5000);
    Produit p2("Telephone", 3000);
    Produit p3("Clavier", 200);

    // Affichage des prix TTC avec TVA de 20%
    cout << "Prix TTC avant modification :" << endl;

    cout << "Ordinateur : " << p1.getPrixTTC() << " DH" << endl;
    cout << "Telephone : " << p2.getPrixTTC() << " DH" << endl;
    cout << "Clavier : " << p3.getPrixTTC() << " DH" << endl;

    // Modification du taux TVA
    Produit::modifierTVA(10);

    // Affichage des nouveaux prix TTC
    cout << "\nPrix TTC apres modification :" << endl;

    cout << "Ordinateur : " << p1.getPrixTTC() << " DH" << endl;
    cout << "Telephone : " << p2.getPrixTTC() << " DH" << endl;
    cout << "Clavier : " << p3.getPrixTTC() << " DH" << endl;

    return 0;
}