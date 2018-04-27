#include <bits/stdc++.h>

using namespace std;

string larrysArray(vector <int> A) {
    // Complete this function
    int n = A.size();
    int cnt = 0;
    
    for(auto i=0; i < (n - 1); i++) {
        for(auto j=i+1; j < n; j++) {
            if(A[i] > A[j])
                cnt++;
        }
    }
    
    if(cnt % 2 ){
        return "NO";    
    }else {
        return "YES";
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int A_i = 0; A_i < n; A_i++){
           cin >> A[A_i];
        }
        string result = larrysArray(A);
        cout << result << endl;
    }
    return 0;
}
