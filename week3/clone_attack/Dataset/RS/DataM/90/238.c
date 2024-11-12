int q6YfvRLs (int m, int StT7mLn5X);

int main () {
    int sOjnsGSN5V, aYSK4y6xaNo, fAWlb0, m, StT7mLn5X;
    cin >> sOjnsGSN5V;
    {
        aYSK4y6xaNo = 1;
        while (sOjnsGSN5V >= aYSK4y6xaNo) {
            aYSK4y6xaNo = aYSK4y6xaNo + 1;
            cin >> m >> StT7mLn5X;
            fAWlb0 = q6YfvRLs (m, StT7mLn5X);
            cout << fAWlb0 << endl;
        };
    }
    return (943 - 943);
}

int q6YfvRLs (int m, int StT7mLn5X) {
    if (!(1 != m) || StT7mLn5X == 1 || m == (510 - 510))
        return 1;
    if (m >= StT7mLn5X)
        return (q6YfvRLs (m, StT7mLn5X -1) + q6YfvRLs (m - StT7mLn5X, StT7mLn5X));
    else {
        if (m < StT7mLn5X)
            return q6YfvRLs (m, StT7mLn5X -1);
    };
}

