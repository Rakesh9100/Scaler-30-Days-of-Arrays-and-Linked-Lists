int Solution::solve(vector<int> &A) {
    
    int count = 1;
    for(int i = 0; i < A.size() - 1; ++i) {
        if((A[i] + A[i + 1]) % 2 != 0) {
            count++;
        }
    }
    return count;
}
