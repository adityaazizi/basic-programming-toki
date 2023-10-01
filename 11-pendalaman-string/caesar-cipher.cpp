#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int K;
    cin >> S >> K;

    int len = S.length();
    for (int i = 0; i < len; i++) {
        int ord = (S[i] - 'a');
        int encrypted = (ord + K) % 26;
        S[i] = encrypted + 'a';
    }

    cout << S << endl;

    return 0;
}