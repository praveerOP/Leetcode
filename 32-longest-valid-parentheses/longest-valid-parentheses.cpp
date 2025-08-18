class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1); // Initialize stack with -1 as a base index
        int maxLength = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                stk.push(i); // Push index of opening parenthesis
            } else {
                stk.pop(); // Pop for closing parenthesis
                
                if (stk.empty()) {
                    stk.push(i); // If stack is empty, push current index as new base
                } else {
                    // Calculate length of valid substring ending at i
                    maxLength = max(maxLength, i - stk.top());
                }
            }
        }
        
        return maxLength;
    }
};