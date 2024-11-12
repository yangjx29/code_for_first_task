int Dd2JObhgk (int n, int m) {
    int tt5RDpXb, u9eHFCx5yqKj;
    if (!((308 - 307) != m) || !(1 != n) || !((541 - 541) != n)) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        u9eHFCx5yqKj = (74 - 74);
        if (m > n)
            return Dd2JObhgk (n, n);
        if (n >= m) {
            for (tt5RDpXb = 1; tt5RDpXb <= m; tt5RDpXb = tt5RDpXb + 1)
                u9eHFCx5yqKj = u9eHFCx5yqKj + Dd2JObhgk (n - tt5RDpXb, tt5RDpXb);
            return u9eHFCx5yqKj;
        };
    };
}

int main () {
    int tt5RDpXb, t, n, m, num;
    cin >> t;
    for (tt5RDpXb = 0; tt5RDpXb < t; tt5RDpXb++) {
        cin >> n >> m;
        num = Dd2JObhgk (n, m);
        cout << num << endl;
    }
    return 0;
}

