#include <iostream>

using namespace std;

int main() {
    int tableau[] ={1, 4, 6, 2, 3, 5, 7};
    int taille = 7;
    int cible = 7;

    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tableau[i] + tableau[j] == cible) {
                cout << "(" << tableau[i] << "," << tableau[j] << ") \n";
            }
        }
    }

    return 0;
}
