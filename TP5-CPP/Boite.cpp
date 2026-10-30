#include <iostream>
class Boite {
    private:
       double longueur;
       double largeure;
       double hauteur;
       static int npBoite;
    public:
       Boite (double l=0 , double h= 0, double p= 0 )
          : longueur (l), largeure (h ), hauteur (p){
            npBoite++;
          }    
        ~Boite (){
            npBoite--;
        }
        static int getNombreBoite(){
            return npBoite;
        }
};
int Boite :: npBoite = 0 ;
int main (){
    Boite b1 (10, 20,30);
    Boite b2 (5,5,5);
    std:: cout<< "Nombre de boites :"<< Boite :: getNombreBoite()<< std :: endl;
    return 0;
}
