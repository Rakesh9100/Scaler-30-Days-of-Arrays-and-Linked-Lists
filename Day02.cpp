int Solution::solve(vector<int> &A) {
    
    int a = *std::max_element(A.begin(), A.end());
    int b = *std::min_element(A.begin(), A.end());
    int c = 0;
    
    for(int i = 0; i< A.size(); ++i) {
        if(A[i] > b && A[i] < a) {
            c += 1;
        }
    }
    return c;
}
