#include <iostream>
using namespace std;

int main() {
    int tableau[3][4] = {
        {1, 2, 3, 0}, 
        {4, 5, 6, 7},
        {8, 9, 0, 0}  
    };
    int colonnes_par_ligne[3] = {3, 4, 2}; 

    for (int i = 0; i < 3; ++i) {
        int somme = 0;
        for (int j = 0; j < colonnes_par_ligne[i]; ++j) {
            somme += tableau[i][j];
        }
        cout << "Somme de la ligne " << (i + 1) << " : " << somme ;
    }

    return 0;
}
