#include <bits/stdc++.h>
using namespace std;

void generate_wiggle(string s, int max_iter, int length) {
    for (int l = 0; l < max_iter; l++) {
        for (int i = 0; i < length; i++) {
            for (int c = 0; c < 2; c++) {
                for (int j = 0; j < i; j++) {
                    cout << " ";
                }
                cout << s << endl;
            }
        }

        for (int i = 0; i < length; i++) {
            for (int c = 0; c < 2; c++) {
                for (int j = length-1; j >= i; j--) {
                    cout << " ";
                }
                cout << s << endl;
            }
        }
    }
}

int main(void) {
    generate_wiggle("Wiggle", 10, 5);
    return 0;
}