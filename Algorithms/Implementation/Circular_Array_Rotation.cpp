#include <bits/stdc++.h>

using namespace std;

vector <int> circularArrayRotation(vector <int> a, vector <int> m) {
    // Complete this function
    vector<int> result;
    
    return result;
}

int main() {
/*    
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> m(q);
    for(int m_i = 0; m_i < q; m_i++){
       cin >> m[m_i];
    }
    vector <int> result = circularArrayRotation(a, m);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
*/
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    int dest=k%n;
    int b[n];
    for (int i=0;i<n;i++) {
        b[dest++]=a[i];
        if (dest==n) dest=0;
    }

    for (int i=0;i<q;i++) {
        int m;
        cin >> m;
        cout << b[m] << endl;
    }

    return 0;
}
