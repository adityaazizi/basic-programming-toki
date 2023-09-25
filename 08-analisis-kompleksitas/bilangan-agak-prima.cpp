#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, factor;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> B;
        factor = 0;
        for (int j = 2; j <= sqrt(B); j++) {
            if (B % j == 0)
                factor++;
        }
        if (factor >= 2)
            cout << "BUKAN" << endl;
        else
            cout << "YA" << endl;
    }

    return 0;
}
