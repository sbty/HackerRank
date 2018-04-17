#include <bits/stdc++.h>

using namespace std;

int queensAttack(int n, int k, int r_q, int c_q, vector < vector<int> > obstacles) {
    // Complete this function
    //vector<vector<int>> next = { {1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1} };
/*
          1  2  3
      1  |d0|y0|d1|
      2  |x0|Q |x1|
      3  |d2|y1|d3|
      
*/    
    int total = 0;
    return total;
}

int main() {
    int n,k;
    cin >> n >> k;
    int rQ,cQ;
    cin >> rQ >> cQ;

    // stores number of attack pos in the 8 directions
    int N=n-rQ;
    int S=rQ-1;
    int E=n-cQ;
    int W=cQ-1;
    int NE=(n-rQ<n-cQ?n-rQ:n-cQ);
    int SE=(rQ-1<n-cQ?rQ-1:n-cQ);
    int NW=(n-rQ<cQ-1?n-rQ:cQ-1);
    int SW=(rQ-1<cQ-1?rQ-1:cQ-1);

    for(int i=0;i<k;i++){
        int rObj,cObj;
        cin >> rObj >> cObj;

        if (cQ==cObj) {
           if ((rObj>rQ)&&(rObj-rQ-1<N)) N=rObj-rQ-1; //N
           else if ((rObj<rQ)&&(rQ-rObj-1<S)) S=rQ-rObj-1; //S
        }
        else if (rQ==rObj) {
           if ((cObj>cQ)&&(cObj-cQ-1<E)) E=cObj-cQ-1; //E        
           else if ((cObj<cQ)&&(cQ-cObj-1<W)) W=cQ-cObj-1; //W
        }    
        else if (rObj-rQ==cObj-cQ) {
           if ((rObj>rQ)&&(rObj-rQ-1<NE)) NE=rObj-rQ-1; //NE
           else if ((rQ>rObj)&&(rQ-rObj-1<SW)) SW=rQ-rObj-1; //SW
        } 
        else if (abs(rObj-rQ)==abs(cObj-cQ)) {
           if ((rObj>rQ)&&(rObj-rQ-1<NW)) NW=rObj-rQ-1; //NW
           else if ((rQ>rObj)&&(rQ-rObj-1<SE)) SE=rQ-rObj-1; //SE           
        }
    }

    cout << N+S+E+W+NE+SE+NW+SW;
    return 0;
}
