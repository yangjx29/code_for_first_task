int main () {
    int n1 = 0, uinFuWrkLz = 0;
    int yeSKnf0ZMJVv;
    cin >> yeSKnf0ZMJVv;
    for (n1 = 3; n1 <= (yeSKnf0ZMJVv / 2); n1 += 2) {
        int k;
        k = 0;
        for (k = 2; sqrt (n1) >= k; k = k + 1) {
            if (!(0 != n1 % k))
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k > sqrt (n1))
            uinFuWrkLz = yeSKnf0ZMJVv - n1;
        else
            continue;
        for (k = 2; k <= sqrt (uinFuWrkLz); k = k + 1) {
            if (uinFuWrkLz % k == 0)
                break;
        }
        if (k > sqrt (uinFuWrkLz))
            cout << n1 << " " << uinFuWrkLz << endl;
    }
    return 0;
}

