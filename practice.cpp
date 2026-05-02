#include <iostream>
using namespace std;

int main() {
    // A simple DSA practice: Finding the sum of an array
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    cout << "DSA Practice: C++ Array Sum" << endl;
    cout << "The total sum is: " << sum << endl;

    return 0;
}
