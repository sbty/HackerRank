#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    // Complete this function
    int last = -1;
    int cnt = 1;
    int max = 1;
    int leave = 0;
    
    sort(arr.begin(), arr.end());
    
   // for(int a: arr) {
    for(auto a = arr.begin(); a != arr.end(); a++) {
        
 //       cout << "a=" << *a << " last=" << last << " cnt=" << cnt << endl;
        if( *a != last || a == arr.end() ) {
            last = *a;
            cnt = 1;
        }else {
            cnt++;
        }
        
        if( cnt > max ) {
            max = cnt;
            leave = *a;
        }
    }
    
    int result = arr.size() - max;
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
