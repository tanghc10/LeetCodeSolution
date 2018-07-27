class Solution {
public:
	bool is_error;
    float isNumeric(char* string)
    {
    	is_error = true;
        if (string == NULL)
        	return 0;
        if (*string == '+' || *string == '-')
        	string++;
        if (*string == '\0')
        	return 0;
        bool dot = false;
        int interger = 0;
        float dotNum = 0;
        while(*string != '\0'){
        	if (*string >= '0' && *string <= '9'){
        		if (dot == false)
        			interger = interger * 10 + *string - '0';
        		else{
        			// 计算小数部分
        		}
        		string++;
        	}else if (*string == '.'){
        		if (dot)
        			return false;
        		string++;
        		dot = true;
        	}else{
        		return 0;
        	}
        }
        is_error = false;
        return true;
    }
};