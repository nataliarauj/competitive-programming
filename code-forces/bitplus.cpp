#include <iostream>
using namespace std;

int main() {
    int casos, x = 0;
    string op;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> op;

        
        if (op.find('+')  != string::npos) {
            x++;
        } else{
            x--;
        }

    }

    cout << x << endl;
    return 0;
}