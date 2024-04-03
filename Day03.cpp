int solve(std::vector<int>& A) {
    int oddCount = 0;
    for (int n : A) {
        if (n % 2 != 0) {
            oddCount++;
        }
    }
    return std::min(oddCount, static_cast<int>(A.size()) - oddCount);
}
