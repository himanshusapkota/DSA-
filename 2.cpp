// SUM OF NUMBERS FROM 0 TO n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    cout << "Sum from 0 to " << n << " is: " << sum << endl;
    return 0;
}
