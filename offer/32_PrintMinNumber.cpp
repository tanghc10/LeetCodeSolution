class Solution {
public:
	static bool comp(const int a, const int& b){
		string strA = to_string(a) + to_string(b);
		string strB = to_string(b) + to_string(a);
		return strA < strB;
	}
    string PrintMinNumber(vector<int> numbers) {
        int length = numbers.size();
        string result;
        if (length == 0)
        	return "";
        sort(numbers.begin(), numbers.end(), comp);
        for (int i = 0; i < length; i++)
        	result += to_string(numbers[i]);
        return result;
    }
};