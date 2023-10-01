#include <bits/stdc++.h>
using namespace std;

bool cekPrima(int N) {
    bool prime = true;

    int cek = 0;

    for (int i = 2; i <= sqrt(N); i++)

        if (N % i == 0)

            cek++;

    if (cek > 0 || N < 2)

        prime = false;

    else

        prime = true;

    return prime = true;
}

int main() {
    int N, p, K = 1;

    cin >> N;

    int i = 2;

    while (i <= N) {
        p = 0;

        if (cekPrima(i)) {
            while ((N % i) == 0) {
                p++;

                N /= i;
            }
        }

        if (K == 1) {
            if (p == 1)

                cout << i;

            else if (p > 1)

                cout << i << "^" << p;

            else
                K--;

        }

        else {
            if (p == 1)

                cout << " x " << i;

            else if (p > 1)

                cout << " x " << i << "^" << p;

            else
                K--;
        }

        i++;

        K++;
    }

    cout << endl;

    return 0;
}