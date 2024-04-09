int Solution::trap(const vector<int> &A) {
    
    int n = A.size();
    if(n == 0) return 0;
    
    std::vector<int> leftMax(n, 0);
    std::vector<int> rightMax(n, 0);
    
    int maxi = numeric_limits<int>::min();
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, A[i]);
        leftMax[i] = maxi;
    }
    
    maxi = numeric_limits<int>::min();
    for(int i = n - 1; i >= 0; i--) {
        maxi = max(maxi, A[i]);
        rightMax[i] = maxi;
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += min(leftMax[i], rightMax[i]) - A[i];
    }
    
    return ans;
}
