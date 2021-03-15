#include <iostream>
#include <stack>

using namespace std;

// https://leetcode.com/problems/make-the-string-great/

bool parok(char a, char b) {
    return abs(a-b) == 32;
}

string makeGood(string s) {
    if (s == "") {
        return "";
    }
    stack<char> myStack;
    myStack.push(s[s.length()-1]);
    for (int i = s.length() - 2; i >= 0; i--) {
        if (!myStack.empty() && parok(myStack.top(), s[i])) {
            myStack.pop();
        } else {
            myStack.push(s[i]);
        }
    }
    string result;
    while (!myStack.empty()) {
        result += myStack.top();
        myStack.pop();
    }
    return result;
}

int main()
{
    return 0;
}
