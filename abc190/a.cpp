#include <iostream>

using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if (C == 0) {
        for (int i = 0; i < 100; i++) {
            A--;
            if (0 >= A) {
                cout << "Aoki" << endl;
                return 0;
            }
            B--;
            if (0 >= B) {
                cout << "Takahashi" << endl;
                return 0;
            }
        }
    } else if (C == 1) {
        for (int i = 0; i < 100; i++) {
            B--;
            if (0 >= B) {
                cout << "Takahashi" << endl;
                return 0;
            }
            A--;
            if (0 >= A) {
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
}