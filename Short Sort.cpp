#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    while (a--) {
        string s;
        cin >> s;
        
        if (s == "abc" || s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}