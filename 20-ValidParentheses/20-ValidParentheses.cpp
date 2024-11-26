class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for( char c : s){
            //if an open bracket is encountered push it into the stack
            if(c == '(' || c == '{' || c == '['){
                stack.push(c);
            }
            //if an empty stack or for every closed bracket an open bracket is not encountered return false
            else
            {
            if(stack.empty() ||
            (c == ')' && stack.top() != '(') || 
            (c == '}' && stack.top() != '{') || 
            (c == ']' && stack.top() != '['))
            {
                return false;
            }
            //pop the opening bracket if you see the closing bracket on top of the stack
            stack.pop();
        }   
    }
    //if the stack is empty that means the string is valid
    return stack.empty();
}
};
