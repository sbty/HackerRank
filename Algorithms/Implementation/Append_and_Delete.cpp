#include <bits/stdc++.h>

using namespace std;
#define L (s.size() + t.size())
string appendAndDelete(string s, string t, int k) {
    // Complete this function
    int i = 0;
    
    for(i = 0; s[i] == t[i]; i++);
        
    return (L <= k + i*2 && L%2 == k%2 || L < k ? "Yes" : "No");
    
}

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    string result = appendAndDelete(s, t, k);
    cout << result << endl;
    return 0;
}
