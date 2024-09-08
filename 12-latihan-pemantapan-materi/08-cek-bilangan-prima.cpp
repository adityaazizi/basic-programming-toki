#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, prime;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> B;
        prime = 0;
        for (int j = 2; j <= sqrt(B); j++) {
            if (B % j == 0)
                prime++;
        }
        if (prime > 0 || B < 2)
            cout << "BUKAN" << endl;
        else
            cout << "YA" << endl;
    }
}