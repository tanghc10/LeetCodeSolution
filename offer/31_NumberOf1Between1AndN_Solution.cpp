class Solution {
public:
	int powerBase10(int n){
		int result = 1;
		while(n--){
			result *= 10;
		}
		return result;
	}
	int numberOf1(const char *number){
		if (number == NULL || *number == '\0' || *number < '0' || *number > '9')
			return 0;
		int first = *number - '0';
		int length = static_cast<int>(strlen(number));
		if (length == 1 && first == 0)
			return 0;
		else if (length == 1 && first > 0)
			return 1;

		int firstNumDigit = 0;
		if (first > 1)
			firstNumDigit = powerBase10(length - 1);
		else if (first == 1)
			firstNumDigit = atoi(number + 1) + 1;
		int otherNumDigit = first * (length - 1) * powerBase10(length - 2);
		int remainNumDigit = numberOf1(number + 1);
		return firstNumDigit + otherNumDigit + remainNumDigit;
	}
    int NumberOf1Between1AndN_Solution(int n)
    {
    	if (n <= 0)
    		return 0;
    	char number[50];
    	sprintf(number, "%d", n);
    	return numberOf1(number);
    }
};