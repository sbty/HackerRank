#include <bits/stdc++.h>

using namespace std;

int beautifulTriplets(int d, vector <int> arr) {
    // Complete this function
    int cnt = 0;
    for(auto i = arr.begin()+1; i< (arr.end() - 1); i++) {
        int left = (*i) - d;
        int right =(*i) + d;
        auto l = find(arr.begin(), i, left);
        auto r = find(i + 1, arr.end(), right);
        
        if(l != i && r != arr.end())
            cnt++;
    }
    return cnt;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = beautifulTriplets(d, arr);
    cout << result << endl;
    return 0;
}
