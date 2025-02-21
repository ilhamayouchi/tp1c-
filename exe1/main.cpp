#include <iostream>

using namespace std;

int main() {
    int tableau[] = {1, 2, 3, 2, 1};
    int taille = 5;

    for (int i =0;i < taille;i++) {
        bool unique =true;
        for (int j = 0;j < taille;j++) {
            if (i != j && tableau[i] == tableau[j]) {
                unique =false;
                break;
            }
        }
        if (unique) {
            cout << "Le nombre unique est : " <<tableau[i]   ;
            break;
        }
    }

    return 0;
}
