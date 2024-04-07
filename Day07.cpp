void Solution::solve(vector<vector<int> > &A) {
    
    for(int i = 0; i < A.size(); i++) {
        for(int j = i; j < A.size(); j++) {
            swap(A[i][j], A[j][i]);
        }
    }
    
    for(int i = 0; i < A.size(); i++) {
        reverse(A[i].begin(), A[i].end());
    }
}
