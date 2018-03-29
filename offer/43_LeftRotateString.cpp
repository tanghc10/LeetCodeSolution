class Solution {
public:
    void reverseString(string& str, int start, int end){
        if (start > end)
            return;
        int left = start;
        int right = end;
        while(left < right){
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
        return;
    }
    string LeftRotateString(string str, int n) {
        int size = str.length();
        reverseString(str, 0, size - 1);
        reverseString(str, 0, size - 1 - n);
        reverseString(str, size - n, size - 1);
        return str;
    }
};
