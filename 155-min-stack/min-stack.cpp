class MinStack {
public:
vector<long long>st;

long long mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            mini = value;
            st.push_back(value);
        }
         else{
            if(value >= mini) st.push_back(value);
            else{
                long long new_value =2LL*value - mini;
                st.push_back(new_value );
                mini =value;
          
            }
      }
    }
    
    void pop() {
       if(st.empty()){
        return;
       }
        long long prev_value = st.back();
        st.pop_back();

        if(prev_value < mini){
            mini = 2LL *mini - prev_value;
        }

        if(st.empty()){
            mini = INT_MAX;
        }
    }
    
    int top() {
        if(st.empty())return -1;
        long long prev_value = st.back();

        if(prev_value < mini){
            return(int)mini;
        }
        return (int)prev_value;
    }
    
    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */