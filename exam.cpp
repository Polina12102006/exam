#include <iostream>
using namespace std;
int main() {
    int n, su = 0, k = 0;
    cin >> n;
    int** mat = new int* [n];
    for (int k = 0; k < n; k++) {
        mat[k] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (i < j && (i + j > n - 1)) {
                su = su + mat[i][j];
                k = k + 1;
            }
        }
    }
    int  summ, flag = 0, crar = su / k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == crar) {
                summ = i + j;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0) {
        summ = -1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                mat[i][j] = summ;
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
