#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B = -1;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            B++;
            if (B == 10)
                B = 0;
            cout << B;
        }
        cout << endl;
    }

    return 0;
}