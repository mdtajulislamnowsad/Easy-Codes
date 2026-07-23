class MyQueue {
public:

    stack<int> stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        stack<int>stk2;
        int val;
        while(!stk.empty()){
            val =  stk.top();
            stk.pop(); 
            if(stk.empty()){
                break;
            }
            stk2.push(val);
        }
        while(!stk2.empty()){
            stk.push(stk2.top());
            stk2.pop();
        }
        return val;
    }
    
    int peek() {

        stack<int>stk2;
        int val;
        while(!stk.empty()){
            val =  stk.top();
            stk.pop(); 
            stk2.push(val);
        }
        while(!stk2.empty()){
            stk.push(stk2.top());
            stk2.pop();
        }
        return val;
        
    }
    
    bool empty() {
        return stk.empty();
    }
};
