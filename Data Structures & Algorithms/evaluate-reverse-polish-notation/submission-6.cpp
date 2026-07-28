class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> token_stack;
        int first, second;
        for(string token : tokens) {

            if (token == "+" || token == "-" || token == "*" || token == "/") {
                second = token_stack.top();
                token_stack.pop();

                first = token_stack.top();
                token_stack.pop();

                if (token == "+")
                    token_stack.push(first + second);
                else if (token == "-")
                    token_stack.push(first - second);
                else if (token == "*")
                    token_stack.push(first * second);
                else if (token == "/")
                    token_stack.push(first / second);
            } else {
                token_stack.push(stoi(token));
            }
        }
        return token_stack.top();
    }
};
