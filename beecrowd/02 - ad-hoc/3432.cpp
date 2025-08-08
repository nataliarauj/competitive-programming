#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(8);
    bool fail = false;

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] == 9) {
            fail = true;
            break;
        }
    }


    if (fail == true) {
        cout << "F\n";
    } else {
        cout << "S\n";
    }

    return 0;

}