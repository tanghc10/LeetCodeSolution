class Solution {
public:
    int StrToInt(string str) {
        int size = static_cast<int>(str.length());
        if (size == 0)
            return 0;
        int index = 0;
        long long result = 0;
        bool below_zero = false;
        if (str[0] == '+')
            index++;
        else if (str[0] == '-'){
            index++;
            below_zero = true;
        }
        while(index < size){
            if (str[index] < '0' || str[index] > '9')
                return 0;
            result = result * 10 + str[index] - '0';
            index++;
        }
        if ((!below_zero && result > 0x7FFFFFFF) || (below_zero && result < (signed int)0x80000000))
            return 0;
        if (below_zero)
            result *= -1;
        return (int)result;
    }
};