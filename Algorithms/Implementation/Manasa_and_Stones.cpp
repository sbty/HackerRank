#include <bits/stdc++.h>

using namespace std;

vector <int> stones(int n, int a, int b) {
    // Complete this function
    vector<int> result;
    
    for(int i=0; i< n; i++) {
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            int sum = (i * a) + ((n-1-i)*b);
            result.push_back(sum);
        }
    }
    
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end() );
    return result;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        int a;
        cin >> a;
        int b;
        cin >> b;
        vector <int> result = stones(n, a, b);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}
