class Solution {
public:
	void replaceSpace(char *str,int length) {
		if (str == NULL || *str == '\0')
			return;
		int blankNum = 0;
		for(int i = 0; i < length; i++)
			if (str[i] == ' ')
				blankNum++;
		int i = length - 1, j = length + blankNum*2 - 1;
		while(i >= 0){
			if (str[i] == ' '){
				str[j--] = '0';
				str[j--] = '2';
				str[j--] = '%';
			}else
				str[j--] = str[i];
			i--;
		}
		return;
	}
};