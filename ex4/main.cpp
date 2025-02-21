#include <iostream>

using namespace std;



int main() {
    int matrice[3][4] = {
        {-2, 1, -3, 4},
        {-1, 2, 1, -5},
        {4, -1, 2, 1}
    };

    int ligneMax = 0, debut = 0, fin = 0;
    int sommeMax = -700;

    for (int i = 0; i < 3; i++) {
        int somme = 0, tempDebut = 0;

        for (int j = 0; j < 4; j++) {
            somme += matrice[i][j];

            if (somme > sommeMax) {
                sommeMax = somme;
                debut = tempDebut;
                fin = j;
                ligneMax = i;
            }

            if (somme < 0) {
                somme = 0;
                tempDebut = j + 1;
            }
        }
    }
    cout << "Sous tableau maximal : [ ";
    for (int k = debut; k <= fin; k++) {
        cout << matrice[ligneMax][k] << " ";
    }
   cout << "], Somme = " << sommeMax ;

    return 0;
}
