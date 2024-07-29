class MyStack {
    private:
        vector<int>stack;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        if(!stack.empty()){
            int topElement = stack.back();
            stack.pop_back();
            return topElement;
        }
        return -1;
    }
    
    int top() {
        if(!stack.empty()){
            return stack.back();
        }
        return -1;
    }
    
    bool empty() {
        return stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
