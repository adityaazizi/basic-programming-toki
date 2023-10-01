#include <bits/stdc++.h>
using namespace std;

int main() {
    string kalimat, sub_kalimat;
    cin >> kalimat >> sub_kalimat;

    while (kalimat.find(sub_kalimat) != -1)
        kalimat = kalimat.erase(kalimat.find(sub_kalimat), sub_kalimat.length());

    cout << kalimat << endl;

    return 0;
}