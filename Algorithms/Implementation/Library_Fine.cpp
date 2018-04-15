#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    // Complete this function
    int hackos = 0;
    if( y2 < y1 ) {
        hackos = 10000;
    }else if(y2 > y1){
        hackos = 0; 
    }else{
        if( m2>m1 || (m2 >m1 && d2>d1) ){
            hackos = 0;
        }else if( m2 < m1 ) {
            hackos = (m1-m2)*500;
        }else if( d2 < d1 ) {
            hackos = (d1-d2)*15;
        }
    }
    return hackos;
}

int main() {
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
    return 0;
}
