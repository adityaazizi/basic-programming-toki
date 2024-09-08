#include <bits/stdc++.h>
using namespace std;

void cetak_menurun(int n) {
    if (n == 1) {
        cout << n << endl;
    } else {
        cout << n << endl;
        cetak_menurun(n - 1);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cetak_menurun(10);
}
