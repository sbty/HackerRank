#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    // Complete this function
    
    long count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a')
            count++;
    }

    long rep = 0;
    long remainder = 0;
    rep = n / s.length();
    remainder = n % s.length();
    
    long last = 0;
    if(remainder) {
        for(long i=0; i<remainder; i++) {
            if(s[i] == 'a') {
                last++;
            }
        }
    }
    
    long result = (rep * count) + last;
    return result;
    
}

int main() {
    string s;
    cin >> s;
    long n;
    cin >> n;
    long result = repeatedString(s, n);
    cout << result << endl;
    return 0;
}
