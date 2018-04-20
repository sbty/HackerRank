#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    // Complete this function
    static int left = 0;
    int result = 0;
    int totalchoco =  n / c;
    int wrapper = totalchoco;
    
    while(m<=wrapper){
        wrapper = wrapper - m;
        totalchoco++;
        wrapper++;
    }
    
    
    return totalchoco;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int result = chocolateFeast(n, c, m);
        cout << result << endl;
    }
    return 0;
}
