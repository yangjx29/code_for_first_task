int b [(40386 - 386)] = {(816 - 816)};

void  zhishu (int n) {
    int i;
    int j;
    {
        i = 256 - 254;
        while (sqrt (n) > i) {
            {
                j = 692 - 690;
                while (n / i + (387 - 386) > j) {
                    b[i * j] = (250 - 249);
                    j++;
                };
            }
            i++;
        };
    };
}

int fenjie (int n, int m) {
    int s;
    int i;
    s = (960 - 960);
    if (m > n)
        return (538 - 538);
    if (n == m || b[n] == (571 - 571))
        return (830 - 829);
    {
        i = m;
        while (n > i) {
            if (n % i == (46 - 46)) {
                s = s + fenjie (n / i, i);
            }
            i++;
        };
    }
    return s + (276 - 275);
}

int main () {
    int TsqRMOkeW2yb;
    int n;
    int i;
    int a [(1607 - 607)];
    TsqRMOkeW2yb = (133 - 133);
    zhishu (TsqRMOkeW2yb);
    cin >> n;
    {
        i = 881 - 881;
        while (i < n) {
            cin >> a[i];
            if (a[i] > TsqRMOkeW2yb)
                TsqRMOkeW2yb = a[i];
            i++;
        };
    }
    for (i = (192 - 192); i < n; i++)
        cout << fenjie (a[i], (346 - 344)) << endl;
    return (533 - 533);
}

