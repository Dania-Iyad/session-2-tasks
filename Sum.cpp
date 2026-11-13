#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    while (s--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}