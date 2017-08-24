int reverse(int x) {
    int flag = x > 0 ? 1 : -1;
    x *= flag;
    long result = 0;
    while (x){
        result = result*10 + x%10;
        x /= 10;
    }
    if (result*flag > INT_MAX || result*flag < INT_MIN){
        return 0;
    }
    return result*flag;
}