int main () {
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> m;
    for (int NtmBH8X1 = 3;
    m / 2 >= NtmBH8X1; NtmBH8X1 = NtmBH8X1 +2) {
        int t = 1, p = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int k1 = 2;
        sqrt (NtmBH8X1) >= k1; k1++) {
            int q1 = NtmBH8X1 % k1;
            t = t * (q1 != 0);
        }
        if (t == 1) {
            int i2 = m - NtmBH8X1;
            for (int k2 = 2;
            k2 <= sqrt (i2); k2 = k2 + 1) {
                int q2 = i2 % k2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p = p * (q2 != 0);
            }
            if (p == 1)
                cout << NtmBH8X1 << " " << i2 << endl;
        };
    };
}

