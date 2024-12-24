class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (int i=0; i<s.length(); i++) {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{') { //push to stack if any of the opening brackets come 
                stk.push(s[i]);
            } else {
                if (!stk.empty()) { 
                    if (s[i]==')' && stk.top()=='(' || s[i]==']' && stk.top()=='[' || s[i]=='}' && stk.top()=='{') { //valid closing for every opening
                        stk.pop();
                    } else return false;
                } else return false; //stack is empty and without closing all brackets
            }
        }
        if (stk.empty()) {
            return true;
        } else return false;
    }
};