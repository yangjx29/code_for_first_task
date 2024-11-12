int main () {
    double  max = 0, cha [1000], t, sum;
    int n, a [1000], i, sa = 0, m = 0, j, s [1000];
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> a[i];
            sa = sa + a[i];
            i = i + 1;
        };
    }
    sum = (double ) sa / (double ) n;
    {
        i = 0;
        while (n > i) {
            cha[i] = fabs ((double ) a[i] - sum);
            if (max <= fabs ((double ) a[i] - sum))
                max = fabs ((double ) a[i] - sum);
            i = i + 1;
        };
    }
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
    {
        i = 0;
        while (n > i) {
            if (!(max != cha[i])) {
                s[m] = a[i];
                m = m + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (m - 1 > i) {
            {
                j = 0;
                while (m - 1 - i > j) {
                    if (s[j] > s[j + 1]) {
                        t = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << s[0];
    for (i = 1; i < m; i = i + 1)
        cout << "," << s[i];
    return 0;
}

