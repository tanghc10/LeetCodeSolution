class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> result;
        if (input.size() <= 0 || input.size() < k || k < 1)
            return result;
        multiset<int, greater<int> > intSet;
        for(int i = 0; i < input.size(); i++){
            if (intSet.size() < k)
                intSet.insert(input[i]);
            else{
                if (*intSet.begin() > input[i]){
                    intSet.erase(intSet.begin());
                    intSet.insert(input[i]);
                }
            }
        }
        multiset<int, greater<int> >::iterator iter = intSet.begin();
        stack<int> intStack;
        while(iter != intSet.end()){
            intStack.push(*iter);
            iter++;
        }
        while(!intStack.empty()){
            result.push_back(intStack.top());
            intStack.pop();
        }
        return result;
    }
};