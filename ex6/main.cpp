#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<vector<int>> tableau = {
        {1, 2, 3},
        {4, 5, 6, 7},
        {8, 9}
    };
    for (size_t i = 0; i < tableau.size(); ++i) {
        int somme = 0;
        for (size_t j = 0; j < tableau[i].size(); ++j) {
            somme += tableau[i][j];
        }
        cout << "Somme de la ligne " << (i + 1) << " : " << somme << endl;
    }

    return 0;
}
