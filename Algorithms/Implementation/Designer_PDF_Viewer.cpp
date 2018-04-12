#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    
    int height = 0;
    for(auto i = 0; i < word.length(); i++ ) { 
        int tmp = h[static_cast<int>(word[i] - 97)];
        if( tmp > height ) {
            height = tmp;
        }
    }
    int width = word.length();
 
    int sq = height * width;
    return sq;
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
