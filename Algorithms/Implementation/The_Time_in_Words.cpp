#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    // Complete this function
    vector<string> numbers = {
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
    
    string ans;
    if(m == 0) {
        ans = numbers[h] + " o' clock";
  
    }else if(m == 15){
        ans = "quarter past " + numbers[h];
    }else if(m == 30){
        ans = "half past " + numbers[h];
    }else if(m == 45){
        ans = "quarter to " + numbers[h+1];
    }else if(m == 1){
        ans = numbers[m] +" minute past " + numbers[h];
    }else if(m < 30){
        ans = numbers[m] +" minutes past " + numbers[h];
    }else if(m > 30){
        ans = numbers[60-m] +" minutes to " + numbers[h+1];
    }
    
    return ans;
}

int main() {
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result = timeInWords(h, m);
    cout << result << endl;
    return 0;
}
