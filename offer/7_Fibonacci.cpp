class Solution {
public:
    int Fibonacci(int n) {
    	if (n == 0)
    		return 0;
    	if (n == 1 || n == 2)
    		return 1;
    	int *fibonacciArray = new int[n+1];
    	fibonacciArray[1] = 1;
    	fibonacciArray[2] = 1;
    	for(int i = 3; i <= n; i++)
    		fibonacciArray[i] = fibonacciArray[i - 1] + fibonacciArray[i - 2];
    	delete[] fibonacciArray;
    	return fibonacciArray[n];
    }
};