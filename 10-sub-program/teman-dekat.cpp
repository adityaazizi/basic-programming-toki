#include <bits/stdc++.h>
using namespace std;

int closeness(int Xi, int Xj, int Yi, int Yj, int D) {
    int distance = pow(abs(Xj - Xi), D) + pow(abs(Yj - Yi), D);
    return distance;
}

int main() {
    int N, D;
    cin >> N >> D;

    int arrX[N], arrY[N];
    for (int i = 0; i < N; i++) {
        cin >> arrX[i] >> arrY[i];
    }

    int hasil = 0, min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            hasil = closeness(arrX[i], arrX[j], arrY[i], arrY[j], D);
            if (hasil < min)
                min = hasil;

            if (hasil > max)
                max = hasil;
        }
    }
    cout << min << " " << max << endl;

    return 0;
}