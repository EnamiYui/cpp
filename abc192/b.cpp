#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++){
        char c = S[i];
         if (i % 2 != 0) {
                if (islower(S[i])) {
                    cout << "No" << endl;
                    return 0;
                }
            } else if (i % 2 == 0) {
                if (isupper(S[i])) {
                    cout << "No" << endl;
                    return 0;
                }
            }
    }
    cout << "Yes" << endl;
    return 0;
}