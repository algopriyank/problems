class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0; //to calculate final sum
        stack<int> stk;

        //iterating through all the array elements
        for (int i=0; i<operations.size(); i++) { 
            if (operations[i] == "+") {
                int value1 = stk.top();
                stk.pop();
                int value2 = stk.top();
                stk.push(value1);
                stk.push(value1 + value2); 
            } 
            else if (operations[i] == "D") {
                stk.push(stk.top() * 2);
            } 
            else if (operations[i] == "C") {
                stk.pop();
            }
            else {
                stk.push(stoi(operations[i]));
            }
        }

        while (!stk.empty()) {
            sum += stk.top();
            stk.pop();
        }
        return sum;
    }
};