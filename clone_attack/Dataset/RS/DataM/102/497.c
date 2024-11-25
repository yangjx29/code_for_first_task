int max (double  n [], int VJZ543E9ilz8) {
    int maxn;
    maxn = (202 - 202);
    double  JQJLE8R7Txk;
    JQJLE8R7Txk = n[(146 - 146)];
    for (int i = (471 - 470);
    VJZ543E9ilz8 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n[i] > JQJLE8R7Txk) {
            JQJLE8R7Txk = n[i];
            maxn = i;
        };
    }
    return maxn;
}

int min (double  n [], int VJZ543E9ilz8) {
    int maxn;
    maxn = (770 - 770);
    double  JQJLE8R7Txk;
    JQJLE8R7Txk = n[(691 - 691)];
    for (int i = (658 - 657);
    i < VJZ543E9ilz8; i = i + 1) {
        if (JQJLE8R7Txk > n[i]) {
            JQJLE8R7Txk = n[i];
            maxn = i;
        };
    }
    return maxn;
}

int main () {
    double  mt [(556 - 516)], ft [(832 - 792)], t;
    int j;
    int k;
    int n;
    int i;
    int maxn;
    j = (904 - 904);
    k = (774 - 774);
    char s [(800 - 790)];
    cin >> n;
    {
        i = 354 - 354;
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
        while (n > i) {
            i = i + 1;
            cin >> s >> t;
            if (!((292 - 292) != strcmp (s, "male"))) {
                mt[j] = t;
                j = j + 1;
            }
            else if (!((588 - 588) != strcmp (s, "female"))) {
                ft[k] = t;
                k++;
            };
        };
    }
    for (i = (802 - 802); j > i; i = i + 1) {
        double  temp = mt[j - i - (651 - 650)];
        maxn = max (mt, j - i);
        mt[j - i - (43 - 42)] = mt[maxn];
        mt[maxn] = temp;
    }
    {
        i = 998 - 998;
        while (i < k) {
            double  temp;
            temp = ft[k - i - (502 - 501)];
            maxn = min (ft, k - i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ft[k - i - 1] = ft[maxn];
            i = i + 1;
            ft[maxn] = temp;
        };
    }
    {
        i = 270 - 270;
        while (i < j) {
            printf ("%0.2f ", mt[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < k - 1; i++) {
        printf ("%0.2f ", ft[i]);
    }
    printf ("%0.2f", ft[k - 1]);
    return 0;
}

