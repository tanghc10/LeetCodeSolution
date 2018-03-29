class Solution {
    stack<int> intStack;
    stack<int> minStack;
    int curentMin;
public:
    void push(int value) {
        if (minStack.empty()){
            curentMin = value;
        }
        if (curentMin > value)
            curentMin = value;
        intStack.push(value);
        minStack.push(curentMin);
    }
    void pop() {
        curentMin = minStack.top();
        minStack.pop();
        intStack.pop();
    }
    int top() {
        return intStack.top();
    }
    int min() {
        return minStack.top();
    }
};