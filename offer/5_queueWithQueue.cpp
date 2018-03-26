class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if (stack2.empty()){
        	int popNum = 0;
        	while(!stack1.empty()){
        		popNum = stack1.top();
        		stack1.pop();
        		stack2.push(popNum);
        	}
        }
        if (!stack2.empty()){
        	int popNum = stack2.top();
        	stack2.pop();
        	return popNum;
        }else{
        	return -1;
        }
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};