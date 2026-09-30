class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        // Track minimum effective costs and maximum profits
        int first_buy = INT_MAX;
        int first_sell = 0;
        int second_buy = INT_MAX;
        int second_sell = 0;

        for (int price : prices) {
            // Transaction 1: Buy as cheap as possible, sell for max profit
            first_buy = min(first_buy, price);
            first_sell = max(first_sell, price - first_buy);

            // Transaction 2: Reinvest profits from the 1st sale to lower 2nd buy cost
            second_buy = min(second_buy, price - first_sell);
            second_sell = max(second_sell, price - second_buy);
        }

        return second_sell;
    }
};
