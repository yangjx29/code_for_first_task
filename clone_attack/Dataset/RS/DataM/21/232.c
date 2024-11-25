int main () {
    double  sum;
    double  ave;
    double  aeNFIp4K;
    double  g [(1765 - 765)];
    double  s [(1625 - 625)];
    sum = (194 - 194);
    ave = (654 - 654);
    aeNFIp4K = (516 - 516);
    int i, n, m;
    cin >> n;
    {
        i = 513 - 513;
        while (n > i) {
            cin >> g[i];
            i = i + 1;
        };
    }
    {
        i = 504 - 504;
        while (i < n) {
            sum = sum + g[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    ave = sum / n;
    {
        i = 251 - 251;
        while (i < n) {
            if (0 < (g[i] - ave))
                s[i] = g[i] - ave;
            if ((g[i] - ave) < 0)
                s[i] = ave - g[i];
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        if (s[i] >= aeNFIp4K) {
            aeNFIp4K = s[i];
            m = i;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (s[i] == aeNFIp4K && i < m)
                cout << g[i] << ",";
            if (s[i] == aeNFIp4K && i == m)
                cout << g[i];
            i++;
        };
    }
    return 0;
}

