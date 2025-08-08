#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    cin >> n1 >> n2;
    double media = (n1 + n2) / 2;
    
    if (media >= 7) {
        cout << "Aprovado" << endl;
    } else if (media >= 4 and media < 7) {
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;

}