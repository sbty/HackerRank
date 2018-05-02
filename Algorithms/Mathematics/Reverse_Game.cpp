#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    int k;
    
    while (t--) {
        cin >> n >> k;
    
    
        k = k+1;
        if (k > n/2)
            cout << (n-k)*2;
        else
            cout << (2*k)-1;
        
        cout << endl;
    }
    return 0;
}
