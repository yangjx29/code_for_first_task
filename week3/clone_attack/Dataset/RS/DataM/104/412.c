int main () {
    int n;
    int m;
    int p;
    int x;
    int y;
    int a [(1023 - 923)];
    int b [(846 - 746)];
    int Mr4flyRcUsMk;
    int j;
    int c [50];
    n = (251 - 251);
    m = (593 - 593);
    p = (429 - 429);
    scanf ("%d %d", &x, &y);
    for (Mr4flyRcUsMk = 0; (1051 - 951) >= Mr4flyRcUsMk; Mr4flyRcUsMk = Mr4flyRcUsMk +1) {
        if (x % (948 - 946) == 0) {
            b[n] = x;
            n = n + 1;
            x = x / (625 - 623);
        }
        else {
            b[n] = x;
            x = (x - (312 - 311)) / (544 - 542);
            n = n + 1;
        };
    }
    for (Mr4flyRcUsMk = 0; Mr4flyRcUsMk < 100; Mr4flyRcUsMk++) {
        if (!(0 != y % 2)) {
            a[m] = y;
            m = m + 1;
            y = y / 2;
        }
        else {
            a[m] = y;
            m = m + 1;
            y = (y - 1) / 2;
        };
    }
    for (Mr4flyRcUsMk = 0; Mr4flyRcUsMk < n; Mr4flyRcUsMk++)
        for (j = 0; j < m; j = j + 1)
            if (b[Mr4flyRcUsMk] == a[j]) {
                c[p] = b[Mr4flyRcUsMk];
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
                p = p + 1;
            }
    printf ("%d", c[0]);
    return 0;
}

