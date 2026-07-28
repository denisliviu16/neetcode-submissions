class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> tempStack;
        vector<int> result(temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++) {
            while(!tempStack.empty() && temperatures[i] > temperatures[tempStack.top()]) {
                int zi_trecuta = tempStack.top();
                tempStack.pop();

                result[zi_trecuta] = i - zi_trecuta;
            }
            tempStack.push(i);
        }

        return result;
    }
};
