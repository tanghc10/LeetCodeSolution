class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> intStack;
        int size = pushV.size();
        int pV = 0;
        for(int i = 0, j = 0; i < size; i++){
        	intStack.push(pushV[i]);
        	while(!intStack.empty() && intStack.top() == popV[pV]){
        		pV++;
        		intStack.pop();
        	}
        }
        if (intStack.empty())
        	return true;
        return false;
    }
};