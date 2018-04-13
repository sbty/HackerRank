#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector <int> a) {
    // Complete this function
    bool isCancel = false;
    int count = 0;
    for(auto i = a.begin(); i != a.end(); i++) {
        if ( *i <= 0 ) {
            count++;
        }
    }
    //cout << count << endl;
    return ( count < k) ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a);
        cout << result << endl;
    }
    return 0;
}
