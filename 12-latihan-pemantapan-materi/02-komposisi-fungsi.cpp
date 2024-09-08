#include <bits/stdc++.h>
using namespace std;

int f(int A, int B, int x) {
    return abs(A * x + B);
}

int applyingKtimes(int A, int B, int K, int x) {
    for (int i = 0; i < K; i++) {
        x = f(A, B, x);
    }
    return x;
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    cout << applyingKtimes(A, B, K, x) << endl;
}