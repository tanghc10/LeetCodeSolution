class Solution {
public:
	void dfs(string str, int index, set<string>& result){
		if (index == (int)str.length() - 1)
			result.insert(str);
        int length = str.length();
		for(int i = index; i < length; i++){
			if (str[index] != str[i] || i == index){
				char temp = str[index];
				str[index] = str[i];
				str[i] = temp;
				dfs(str, index + 1, result);
				temp = str[index];
				str[index] = str[i];
				str[i] = temp;
			}
		}
	}
	bool comp(string& a, string &b){
		return a.compare(b);
	}
    vector<string> Permutation(string str) {
    	set<string> resultSet;
        vector<string> result;
        dfs(str, 0, resultSet);
        for(set<string>::iterator iter = resultSet.begin(); iter != resultSet.end(); iter++)
        	result.push_back(*iter);
        return result;
    }
};