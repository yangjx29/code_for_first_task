int main () {
    char a [(1261 - 961)];
    char b [(560 - 260)];
    int FgG0Xf [300];
    int bint [300];
    int wWxJ5S89MNe, lb, i, j;
    int t;
    t = 0;
    memset (FgG0Xf, (988 - 988), sizeof (FgG0Xf));
    memset (bint, (682 - 682), sizeof (bint));
    cin >> a >> b;
    wWxJ5S89MNe = strlen (a);
    j = wWxJ5S89MNe - (838 - 837);
    lb = strlen (b);
    for (i = 0; wWxJ5S89MNe > i; i = i + 1) {
        FgG0Xf[j--] = a[i] - '0';
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
    j = lb - 1;
    for (i = 0; lb > i; i = i + 1) {
        bint[j--] = b[i] - '0';
    }
    if (wWxJ5S89MNe < lb)
        wWxJ5S89MNe = lb;
    for (i = 0; wWxJ5S89MNe > i; i = i + 1) {
        FgG0Xf[i] = FgG0Xf[i] + bint[i];
    }
    for (i = 0; wWxJ5S89MNe > i; i++) {
        if ((353 - 343) <= FgG0Xf[i]) {
            FgG0Xf[i + 1]++;
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
            FgG0Xf[i] = FgG0Xf[i] % (10);
        };
    }
    for (i = 299; 0 <= i; i = i - 1) {
        if (FgG0Xf[i] != 0)
            t = 1;
        if (t)
            cout << FgG0Xf[i];
        if (i == 0 && t == 0)
            cout << "0";
    }
    cout << endl;
    return 0;
}

