int main () {
    int x [(1381 - 371)] = {(323 - 323)};
    int WQCL7d [(1793 - 783)] = {(702 - 702)};
    int i;
    int n;
    int high [(3764 - 764)] = {(525 - 525)};
    int tmo3V97geA;
    int j476R9dm;
    int j;
    int big;
    char uzNKdb1M;
    cin >> tmo3V97geA;
    x[(797 - 796)] = tmo3V97geA;
    i = (529 - 527);
    n = (921 - 920);
    for (; !(',' != (uzNKdb1M = cin.get ()));) {
        n = n + 1;
        cin >> tmo3V97geA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x[i] = tmo3V97geA;
        i = i + 1;
    }
    cin >> WQCL7d[(395 - 394)];
    for (i = 2; n >= i; i = i + 1) {
        cin >> uzNKdb1M;
        cin >> WQCL7d[i];
    }
    for (i = (985 - 984); n >= i; i++)
        for (j = x[i]; j < WQCL7d[i]; j = j + 1)
            high[j]++;
    big = high[1];
    for (j = 1; j <= 3000; j = j + 1)
        if (high[j] > big)
            big = high[j];
    cout << n << ' ' << big;
}

