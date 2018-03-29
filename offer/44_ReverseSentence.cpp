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
    string ReverseSentence(string str) {
        int size = str.length();
        if (size <= 1)
            return str;
        reverseString(str, 0, size - 1);
        int left = 0, right = 0;
        while(str[right] != '\0'){
            while(str[right] != ' ' && str[right] != '\0')
                right++;
            reverseString(str, left, right - 1);
            while(str[right] == ' ')
                right++;
            left = right;
        }
        return str;
    }
};