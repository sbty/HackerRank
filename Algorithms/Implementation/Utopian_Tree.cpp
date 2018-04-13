#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    // Complete this function
    
    int height = 1;
    if(n % 2 == 0)
        height = (int)(pow(2, n/2) - 1) * 2 + 1;
    else
        height = (int)(pow(2, n/2 + 1) - 1) * 2; 
    
/*    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            height++;
        } else {
            height *= 2;
        }
    }
*/    
    return height;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
