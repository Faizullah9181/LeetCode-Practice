class FreqStack {
public:
    FreqStack() {
 
    }
 
    // current maximum frequency
    int currmax = 0;
 
    // ele --> frequency
    unordered_map<int,int> frequency;
 
    // frequency --> it's stack which elements reahced by order
    unordered_map<int,stack<int>> store;
 
    void push(int x)
    {
        frequency[x]++;
 
        currmax = max(currmax , frequency[x]);
 
        // store in the stack that this element has reached this frequency
 
        store[frequency[x]].push(x);
 
    }
 
    int pop()
    {
        // we need to pop out that element which has maximum frequency
 
        int answer = store[currmax].top();
 
        store[currmax].pop();
 
        // now frequency of popped out element must decrease.
        // check if it can affect maximum frequency?
 
        if(store[frequency[answer]--].empty())
            currmax--;
 
        return answer;
    }
};
 
/*
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */

