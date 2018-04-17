#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long hi;

vector<string> split_string(string);

/*
 * Complete the taumBday function below.
 */

void boyfriendgirlfriendgift(hi B,hi W,hi x,hi y,hi z){
    hi firstsave=0;
    hi opt1=B*x;
    if(opt1 < B*(z+y)){
        firstsave=opt1;
    }
    else{
        firstsave=B*(z+y);
    }
    hi secondsave=0;
    hi opt2=W*y;
    if(opt2 < W*(z+x)){
        secondsave=opt2;
    }
    else{
        secondsave=W*(z+x);
    }
    cout<<firstsave+secondsave<<endl;
}
    
int main() {
    hi notc;
    hi B,W,x,y,z;
    cin>>notc;
    for(hi i=0;i<notc;i++){
        cin>>B>>W>>x>>y>>z;
        boyfriendgirlfriendgift(B,W,x,y,z);
    }
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
