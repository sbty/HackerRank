#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    // Complete this function
    int d = n;
    int cnt = 0;
    int tmp;
    while ( d != 0 ) {
        tmp = d%10;
 //       cout << tmp << endl;
        if( (tmp != 0) && (n % tmp == 0) ) 
            cnt++;
        d = d/10;
    }
    return cnt;
        
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}
