#include <bits/stdc++.h>
using namespace std;

auto QKnot = []() -> void {
    int input1, output1, input2, output2;
    cin >> input1 >> output1;
    cin >> input2 >> output2;
    int ket[2][1], bra[1][2];

    auto compute = [&](int x, int y) -> void {
        if(x == 0) {
            ket[0][0] = 1;
            ket[1][0] = 0;
        } else {
            ket[0][0] = 0;
            ket[1][0] = 1;
        }
        if(y == 0) { 
            bra[0][0] = 1;
            bra[0][1] = 0;
        } else {
            bra[0][0] = 0;
            bra[0][1] = 1;
        }
    };

    int data1[2][2], data2[2][2];

    auto zero = [&]() -> void {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                data1[i][j] = 0;
                data2[i][j] = 0;
            }
        }
    };

    zero();

    auto multiplication = [&](int ket[2][1], int bra[1][2], int data[2][2]) -> void {
        data[0][0] += ket[0][0] * bra[0][0];
        data[0][1] += ket[0][0] * bra[0][1];
        data[1][0] += ket[1][0] * bra[0][0];
        data[1][1] += ket[1][0] * bra[0][1];
    };

    compute(output1, input1);
    multiplication(ket, bra, data1);
    compute(output2, input2);
    multiplication(ket, bra, data2);
    int M[2][2];

    auto add = [&]() -> void {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                M[i][j] = data1[i][j] + data2[i][j];
            }
        }
    };
    add();
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << M[i][j] << ' ';
        }
        cout << '\n';
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    QKnot();
    return 0;
}
