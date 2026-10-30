#include <iostream>
#include "Utilisateur.hpp"
using namespace std;

int main() {

    cout << "Nombre initial : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Connexion des utilisateurs
    Utilisateur u1("Ahmed", "admin");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur u2("Sara", "visiteur");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur u3("Youssef", "visiteur");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Deconnexion de u2
    {
        cout << "\nDeconnexion de Sara..." << endl;
        Utilisateur u4("Sara", "visiteur");

        cout << "Utilisateurs connectes : "
             << Utilisateur::getNbUtilisateursConnectes() << endl;
    }

    cout << "\nNombre apres destruction de u4 : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}