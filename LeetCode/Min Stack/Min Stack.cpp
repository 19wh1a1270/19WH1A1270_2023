class MinStack {
public:
MinStack() {

}
stack<int>st;
stack<int>min;
void push(int val) {
    if(st.empty())
    {
        st.push(val);
        min.push(val);
        return;
    }
    else
    {
        if(min.top()>=val)
            min.push(val);
        st.push(val);
    }
}

void pop() {
    if(st.empty())
        return;
    if(!min.empty() && st.top()==min.top())
        min.pop();
    st.pop();
}

int top() {
    if(st.empty())
    {
        return -1;
    }
    return st.top();
}

int getMin() {
    if(min.empty())
        return -1;
    return min.top();
}
};

