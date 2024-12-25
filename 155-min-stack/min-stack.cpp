class MinStack {
public:
    stack<int> stk;
    stack<int> minstk;

    MinStack() { }
    
    void push(int val) {
        stk.push(val); //first push to main stack

        // if minstk is empty or value is greater than minstk's top
        if (minstk.empty() || val <= minstk.top()) {
            minstk.push(val); //push val
        }
    }
    
    void pop() {
        //if top of both stack is equal 
        if (stk.top() == minstk.top()) {
            minstk.pop(); //pop from in minstk then stk
        }
        //otherwise only pop from stk
        stk.pop();
    }
    
    int top() {
        //return top of stk
        return stk.top();
    }
    
    int getMin() {
        //return top of minstk
        return minstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */