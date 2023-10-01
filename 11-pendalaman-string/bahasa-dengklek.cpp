#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.length();
    for (int i = 0; i < len; i++) {
        if (S[i] >= 'a' && S[i] <= 'z')
            S[i] -= 32;
        else if (S[i] >= 'A' && S[i] <= 'Z')
            S[i] += 32;
    }

    cout << S << endl;

    return 0;
}