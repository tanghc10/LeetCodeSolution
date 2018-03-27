class Solution {
public:
    double Power(double base, int exponent) {
    	long long absExp = abs((long long) exponent);
    	double result = 1.0;
    	while(absExp){
    		if (absExp & 0x1)
    			result *= base;
    		base *= base;
    		absExp = absExp >> 1;
    	}
    	return (exponent > 0) ? result : 1 / result;
    }
};