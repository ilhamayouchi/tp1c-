#include <iostream>

using namespace std;

int main() {
    int tableau[] = {30, 8, 5, 7, 2, 56};
    int taille = 6;
    int indice= 0;
    for (int i = 0; i < taille; i++) {
        if (tableau[i] % 2 == 0) {
            int temp = tableau[i];
            for (int j = i; j > indice; j--) {
                tableau[j] = tableau[j - 1];
            }
            tableau[indice] = temp;
            indice++;
        }
    }
    for (int i = 0;i< taille;i++) {
        cout << tableau[i] << "\n";
    }

    return 0;
}
