#include <iostream>

using namespace std;

int main(){
    int X;
    cin >> X;
    int a = X / 100;
    int b = 100 * a + 100;
    cout << (b - X) << endl;
}