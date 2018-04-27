#include <iostream>
#include <vector>

using namespace std;

class Solution {
    //Write your code here
    private:
    vector<char> stack;
    vector<char> queue;
    
    public:
    void pushCharacter(char s){
        stack.push_back(s);
    }
    void enqueueCharacter(char s){
        queue.insert(queue.begin(),s);
    }
    char popCharacter(){
        char ch = stack.back(); 
        stack.pop_back(); 
        return ch;
    }
    char dequeueCharacter(){
        char ch = queue.back(); 
        queue.pop_back(); 
        return ch;
    }
    

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}