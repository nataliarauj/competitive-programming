#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, mediana;
    cin >> n;
    vector<int> total(n);

    for (int i = 0; i < n; i++)
    {
        cin >> total[i];
    }

    sort(total.begin(), total.end());
    
    int tamanho = total.size();

    if (tamanho % 2 == 0) {
        mediana = (total[tamanho / 2 - 1] + total[tamanho / 2]) / 2;
    } else {
        mediana = total[tamanho / 2];
    }

    cout << mediana << endl;
    
    return 0;
}