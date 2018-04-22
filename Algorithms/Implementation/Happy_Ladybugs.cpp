#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the happyLadybugs function below.
 */
string happyLadybugs(string b) {
    /*
     * Write your code here.
     */
    int n = b.length();
    bool res=1;
    for(char i='A'; i<='Z'; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(b[j]==i) cnt++;
        }
        if(cnt==1){res=0; break;}     
    }
    
    if(res){
        int cnt_=0;
        for(int i=0; i<n; i++){
            if(b[i]=='_') cnt_++;
        }
        if(cnt_==0){
            for(int i=1; i<(n-1); i++){
                if(b[i]!=b[i+1] && b[i]!=b[i-1]) {res=0; break;}
            }
        } 
    }
    
    string result = res ? "YES" : "NO" ;
    return result;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
