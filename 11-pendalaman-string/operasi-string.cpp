#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1, S2, S3, S4;
    cin >> S1 >> S2 >> S3 >> S4;

    int findS2 = S1.find(S2);
    S1 = S1.erase(findS2, S2.length());

    int findS3 = S1.find(S3);
    S1.insert(findS3 + S3.length(), S4);

    cout << S1 << endl;

    return 0;
}