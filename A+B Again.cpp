#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    while (s--) {
        int n;
        cin >> n;
        
        int A = n / 10;   
        int B = n % 10;  
        
        cout << A + B << endl;
    }
    
}