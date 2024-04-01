int solve(std::vector<int>& A) {
    int res = std::numeric_limits<int>::min();
    for (int i = 0; i < A.size(); ++i) {
        for (int j = i + 1; j < A.size(); ++j) {
            if (A[j] != 0) {
                res = std::max(res, A[i] % A[j]);
            }
            if (A[i] != 0) {
                res = std::max(res, A[j] % A[i]);
            }
        }
    }
    return res;
}
