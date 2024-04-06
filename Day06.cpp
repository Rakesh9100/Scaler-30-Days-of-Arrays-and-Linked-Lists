vector<int> Solution::getRow(int A) {
    vector<int> res(A + 1);
    res[0] = 1;
    for (int i = 1; i <= A; ++i) {
        for (int j = i; j >= 1; --j) {
            res[j] += res[j - 1];
        }
    }
    return res;
}
