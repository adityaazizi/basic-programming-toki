#include <bits/stdc++.h>
using namespace std;

int main() {
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

    int total_bebek = 0;
    int selisih = 0;

    for (int i = 0; i < 10; i++) {
        selisih = beli[i] - jual[i];
        total_bebek += selisih;
        cout << total_bebek << endl;
    }
}