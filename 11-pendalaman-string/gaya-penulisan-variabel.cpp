#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.find('_') != -1) {
        while (S.find('_') != -1) {
            int pos = S.find('_');
            S.erase(pos, 1);
            S[pos] -= 'a' - 'A';
        }
    } else {
        for (int i = 0; i < S.length(); i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                S[i] += 'a' - 'A';
                S.insert(i, "_");
            }
        }
    }

    cout << S << endl;

    return 0;
}