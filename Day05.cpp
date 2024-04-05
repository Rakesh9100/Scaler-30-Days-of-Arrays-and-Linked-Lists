int maxProfit(const std::vector<int>& A) {
    if (A.empty()) return 0;
    
    int l = 0;
    int profit = 0;
    for (int r = 1; r < A.size(); r++) {
        if (A[l] < A[r]) {
            profit = std::max(profit, A[r] - A[l]);
        }
        else {
            l = r;
        }
    }
    return profit;
}
