#include "Utilisateur.hpp"

// Initialisation de l'attribut static
int Utilisateur::nbUtilisateursConnectes = 0;

// Constructeur
Utilisateur::Utilisateur(string n, string r) {
    nom = n;
    role = r;

    nbUtilisateursConnectes++;

    cout << nom << " est connecte." << endl;
}

// Destructeur
Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;

    cout << nom << " est deconnecte." << endl;
}

// Methode statique
int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}