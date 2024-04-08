int Solution::maxSubArray(const vector<int> &A) {
    
    int max = numeric_limits<int>::min();
    int max_h = 0;
    
    for(int i = 0; i < A.size(); i++) {
        max_h += A[i];
        if(max < max_h) {
            max = max_h;
        }
        if(max_h < 0) {
            max_h = 0;
        }
    }
    return max;
}
