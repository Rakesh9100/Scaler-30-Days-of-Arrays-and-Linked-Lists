vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long n = A.size();
    long long A1 = 0, A2 = 0;
    for (int num : A) {
        A1 += num;
        A2 += (long long)num * num;
    }
    long long E1 = n * (n + 1) / 2;
    long long E2 = n * (n + 1) * (2 * n + 1) / 6;
    
    long long a_m_b = A1 - E1;
    long long a_p_b = (A2 - E2) / a_m_b;
    
    long long a = (a_m_b + a_p_b) / 2;
    long long b = a_p_b - a;
    
    return {(int)a, (int)b};
    
}
