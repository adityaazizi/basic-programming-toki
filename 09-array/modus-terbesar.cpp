#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int modus = arr[0], cek = 1;
    for (int i = 0; i < N; i++)
        if (arr[i] > 0) {
            int count = 1;
            for (int j = i + 1; j < N; j++)
                if (arr[i] == arr[j]) {
                    arr[j] = 0;
                    count++;
                }
            if (count > cek || (arr[i] > modus && count == cek)) {
                cek = count;
                modus = arr[i];
            }
        }
    cout << modus << endl;

    return 0;
}