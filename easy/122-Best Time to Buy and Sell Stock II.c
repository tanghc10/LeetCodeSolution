int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;
    int index;
    if (pricesSize <= 1){
        return 0;
    }
    for(index = pricesSize-1; index>0; index--){
        if(prices[index] - prices[index-1] > 0){
            max_profit += prices[index] - prices[index-1];
        }
    }
    return max_profit;
}
