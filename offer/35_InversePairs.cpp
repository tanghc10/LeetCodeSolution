class Solution {
public:
    long long cal(vector<int>& data, vector<int>& copy, int start, int end){
        if (start == end){
            copy[start] = data[start];
            return 0;
        }
        /*
        for(int i = start; i <= end; i++)
            cout<<copy[i]<<" ";
        cout<<endl;*/
        // 计算两边的逆序对个数
        int length = (end - start) >> 1;
        long long left_counter = cal(copy, data, start, start + length);
        long long right_counter = cal(copy, data, start + length + 1, end);
        // 计算跨过中线的逆序对个数
        int i = start + length;
        int j = end;
        int copyIndex = end;
        long long cross_counter = 0;
        while(i >= start && j >= start + length + 1){
            if (data[i] > data[j]){
                copy[copyIndex--] = data[i--];
                cross_counter = (cross_counter + j - start - length) % 1000000007;
            }else
                copy[copyIndex--] = data[j--];
        }
        for(; i >= start; i--)
            copy[copyIndex--] = data[i];
        for(; j >= start + length + 1; j--)
            copy[copyIndex--] = data[j];
        return (left_counter + right_counter + cross_counter) % 1000000007;
    }
    int InversePairs(vector<int> data) {
        int size = static_cast<int>(data.size());\
        if (size <= 0)
            return 0;
        vector<int> copy;
        for(int i = 0; i < size; i++)
            copy.push_back(data[i]);
        long long result = cal(data, copy, 0, size - 1);
        return result % 1000000007;
    }
};