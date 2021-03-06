//不正解な回答
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A;
    vector<int> B;
    vector<int> C;
    for (int i = 0; i < N; i++) {
        int a,b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
        int c = A[i] + B[i];
        C.push_back(c);
    }

    int minA = *std::min_element(A.begin(), A.end());
    int minB = *std::min_element(B.begin(), B.end());
    int minC = *std::min_element(C.begin(), C.end());
    int D;
    if (minA = minB) {
        D = minA;
    } else if (minA > minB) {
        D = minA;
    } else if (minB > minA) {
        D = minB;
    }

    if (minC = D) {
        cout << minC << endl;
    } else if (minC > D) {
        cout << minC << endl;
    } else if (D > minC) {
        cout << D << endl;
    }
}