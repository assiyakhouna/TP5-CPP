#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <iostream>
#include <string>
using namespace std;

class Utilisateur {
private:
    string nom;
    string role;

    static int nbUtilisateursConnectes;

public:
    Utilisateur(string n, string r);
    ~Utilisateur();

    static int getNbUtilisateursConnectes();
};

#endif