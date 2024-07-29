class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stackPush.push(x);
    }
    
    int pop() {
        shiftStacks();
        int topValue = stackPop.top();
        stackPop.pop();
        return topValue;
    }
    
    int peek() {
        shiftStacks();
        return stackPop.top();
    }
    
    bool empty() {
        return stackPush.empty() && stackPop.empty();
    }

    private:
        stack<int>stackPush;
        stack<int>stackPop;

        void shiftStacks(){
            if(stackPop.empty()){
                while(!stackPush.empty()){
                    stackPop.push(stackPush.top());
                    stackPush.pop();
                }
            }
        }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
