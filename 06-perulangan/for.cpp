#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, total = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> B;
        total += B;
    }

    cout << total << endl;

    return 0;
}