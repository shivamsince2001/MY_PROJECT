#include <iostream>
using namespace std;

int main() {
    int r, n, m, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    m = n; // Store original number in m

    while (n > 0) {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r; // Cube of each digit
    }

    if (sum == m) {
        cout << "It's an Armstrong number." << endl;
    } else {
        cout << m << " is not an Armstrong number." << endl;
    }

    return 0;
}
