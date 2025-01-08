#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd_mismatch = 0, even_mismatch = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            // Check if the parity of index and value mismatch
            if (i % 2 != num % 2) {
                if (num % 2 == 1)
                    odd_mismatch++;
                else
                    even_mismatch++;
            }
        }

        // Output the result
        if (odd_mismatch == even_mismatch)
            cout << odd_mismatch << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
