#include <bits/stdc++.h>

using namespace std;

int fairRations(vector <int> B) {
    // Complete this function
    vector<int> flag(B.size(),0);
    int result = 0;
    int carry = 0;
    
    auto i = B.begin();
    while(i != B.end()) {
        if(((*i)+carry) % 2) {
            result += 2;
            carry = 1;
        } else {
            carry = 0;
        }
        i++;
    }
    
    if(carry) result = -1;
    return result;
    
}

int main() {
    int N;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0; B_i < N; B_i++){
       cin >> B[B_i];
    }
    int result = fairRations(B);
    if(result >= 0)
        cout << result << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
