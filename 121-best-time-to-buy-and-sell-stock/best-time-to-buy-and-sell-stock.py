class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_prices = 0
        max_profits = 0
        for i in range(len(prices)-1, -1, -1):
            max_prices = max(max_prices, prices[i])
            max_profits = max(max_profits, max_prices - prices[i])
        return max_profits