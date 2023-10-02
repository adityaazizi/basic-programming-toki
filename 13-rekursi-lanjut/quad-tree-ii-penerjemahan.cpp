#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 128;

int m[MAX_N][MAX_N];
int nJawaban;
string jawaban[MAX_N * MAX_N];

void tulis(int r, int c, int k, string s) {
    if (s.length() == 1) {
        for (int i = r; i < r + k; i++) {
            for (int j = c; j < c + k; j++) {
                m[i][j] = 1;
            }
        }
    } else {
        if (s[1] == '0') {
            tulis(r, c, k / 2, s.substr(1));
        } else if (s[1] == '1') {
            tulis(r, c + (k / 2), k / 2, s.substr(1));
        } else if (s[1] == '2') {
            tulis(r + (k / 2), c, k / 2, s.substr(1));
        } else if (s[1] == '3') {
            tulis(r + (k / 2), c + (k / 2), k / 2, s.substr(1));
        }
    }
}

int main() {
    cin >> nJawaban;
    for (int i = 0; i < nJawaban; i++) {
        cin >> jawaban[i];
    }

    int r, c;
    cin >> r >> c;
    int maxRc = max(r, c);
    int pow2 = 1;
    while (pow2 < maxRc) {
        pow2 *= 2;
    }

    for (int i = 0; i < nJawaban; i++) {
        tulis(0, 0, pow2, jawaban[i]);
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}