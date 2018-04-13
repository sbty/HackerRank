#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int person = 5;
    int count = 0;
    while(n>0){
        int interested = person / 2;
        person = interested * 3;
        count = count + interested;
        n--;
    }
    return count;
    
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
