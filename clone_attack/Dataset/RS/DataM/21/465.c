int main () {
    double  s = 0;
    int n, a [300], k = 0, xsFrRc5Qz6b = 0, t = 0, b [100];
    double  max = fabs (s - a[0]);
    cin >> n;
    for (int i = 0;
    n > i; i = i + 1) {
        cin >> a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s += a[i];
    }
    s /= n;
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < n) {
            if (max < fabs (s - a[i])) {
                k = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                max = fabs (s - a[i]);
            }
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
    max = fabs (s - a[0]);
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < n) {
            if (fabs (s - a[i]) >= max) {
                xsFrRc5Qz6b = i;
                max = fabs (s - a[i]);
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
    for (int i = 0;
    i < n; i = i + 1) {
        if (fabs (s - a[k]) == fabs (s - a[i]))
            b[t++] = a[i];
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
    for (int i = 0;
    t - 1 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (int AnIXfSTAp = 0;
        AnIXfSTAp < t - i - 1; AnIXfSTAp++) {
            if (b[AnIXfSTAp] > b[AnIXfSTAp +1]) {
                int temp = b[AnIXfSTAp];
                b[AnIXfSTAp] = b[AnIXfSTAp +1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b[AnIXfSTAp +1] = temp;
            };
        };
    }
    if (t == 1)
        cout << a[k];
    else {
        for (int i = 0;
        i < t - 1; i++) {
            cout << b[i] << ',';
        }
        cout << b[t - 1];
    }
    return 0;
}

