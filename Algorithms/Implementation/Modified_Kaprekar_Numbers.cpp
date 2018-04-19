#include <bits/stdc++.h>

using namespace std;

vector <long int> kaprekarNumbers(long int p, long int q) {
    // Complete this function
    vector<long int> result;
    bool found = false;
//    vector<int> tmp;
    for(long int i = p; i <= q; i++){
        int d = 0;
        
        int i_d = i;
        
        while(i_d > 0) {
            i_d /= 10;
            d++;
        }
        
        long int sq_n = i * i;
        long int d2 = pow(10, d);
        
        long int sum = sq_n % d2 + sq_n / d2;
        
        if(sum == i) {
            result.push_back(i);
            found = true;
        }
        
    }
    if (!found) {
        cout << "INVALID RANGE";
    }
    return result;
}

int main() {
    long int p;
    cin >> p;
    long int q;
    cin >> q;
    vector <long int> result = kaprekarNumbers(p, q);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
