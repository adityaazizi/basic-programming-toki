#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    for (int r = 1; r <= N; r++) {
        for (int c = r; c <= N; c++) {
            if (r * c == N) {
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }
    cout << r_terbaik << " " << c_terbaik << endl;
}