#include <bits/stdc++.h>

using namespace std;

string biggerIsGreater(string w) {
    // Complete this function
    string::iterator i = w.end() - 1;
    
	while (i > w.begin() && *(i - 1) >= *i)
		--i;

    if (i == w.begin())
		return "no answer";
	
	// Find successor to pivot
	string::iterator j = w.end() - 1;
	while (*j <= *(i - 1))
		--j;
	iter_swap(i - 1, j);
	
	// Reverse suffix
	reverse(i, w.end());
    string result = w;
//    cout << w << endl;
    return result;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        string w;
        cin >> w;
        string result = biggerIsGreater(w);
        cout << result << endl;
    }
    return 0;
}
