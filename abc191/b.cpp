#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    vector <int> A;
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        A.push_back(a);
    }

    for (auto it = A.begin(); it != A.end();){
        if (*it == X) {
            it = A.erase(it);
        } else {
            ++it;
        }
    }

    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}