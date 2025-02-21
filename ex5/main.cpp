#include <iostream>

using namespace std;
#include <iostream>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int taille = 3 * 3;
    int compteur[10] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int valeur = matrice[i][j];
            if (valeur < 1 || valeur > taille) {
                cout << " Pas une permutation.";
                return 0;
            }
            compteur[valeur]++;
        }
    }
    for (int i = 1; i <= taille; i++) {
        if (compteur[i] != 1) {
           cout << "Pas une permutation." ;
            return 0;
        }
    }

   cout << "C'est une permutation.";
    return 0;
}
