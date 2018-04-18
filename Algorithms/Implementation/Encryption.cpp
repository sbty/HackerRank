#include <bits/stdc++.h>

using namespace std;

string encryption(string s) {
    // Complete this function
    int n = s.size();
    int row = floor(sqrt( n ) );
    int col = ceil( sqrt( n ) );
    
//    cout << row << " " << col << endl;
    string result;
    for(int i = 0; i < col; i++) {
        for(int j=i; j < n; j += col) {
            //cout << s[j];
            result += s[j];
        }
        result += ' ';
    }
    
  
    return result;
}

int main() {
    string s;
    cin >> s;
    string result = encryption(s);
    cout << result << endl;
    return 0;
}
