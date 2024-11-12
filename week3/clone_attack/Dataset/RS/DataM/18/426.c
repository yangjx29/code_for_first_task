int a [(120 - 19)] [101];

int f (int n) {
    int c7NujPy, w, DTc0Wmef5, mh, NX1tylZFHN, j;
    if (n == (759 - 758))
        return 0;
    for (NX1tylZFHN = (838 - 837); NX1tylZFHN <= n; NX1tylZFHN = NX1tylZFHN +1) {
        DTc0Wmef5 = (1313 - 313);
        for (c7NujPy = 1; c7NujPy <= n; c7NujPy = c7NujPy + 1)
            if (a[NX1tylZFHN][c7NujPy] < DTc0Wmef5)
                DTc0Wmef5 = a[NX1tylZFHN][c7NujPy];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (c7NujPy = 1; c7NujPy <= n; c7NujPy = c7NujPy + 1)
            a[NX1tylZFHN][c7NujPy] = a[NX1tylZFHN][c7NujPy] - DTc0Wmef5;
    }
    for (NX1tylZFHN = 1; NX1tylZFHN <= n; NX1tylZFHN = NX1tylZFHN +1) {
        mh = 1000;
        for (c7NujPy = 1; c7NujPy <= n; c7NujPy = c7NujPy + 1)
            if (a[c7NujPy][NX1tylZFHN] < mh)
                mh = a[c7NujPy][NX1tylZFHN];
        for (c7NujPy = 1; c7NujPy <= n; c7NujPy = c7NujPy + 1)
            a[c7NujPy][NX1tylZFHN] -= mh;
    }
    w = a[(513 - 511)][(686 - 684)];
    for (NX1tylZFHN = 2; NX1tylZFHN < n; NX1tylZFHN = NX1tylZFHN +1)
        for (j = 1; j <= n; j = j + 1)
            a[NX1tylZFHN][j] = a[NX1tylZFHN +1][j];
    for (NX1tylZFHN = 2; NX1tylZFHN < n; NX1tylZFHN = NX1tylZFHN +1) {
        j = 1;
        while (j < n) {
            a[j][NX1tylZFHN] = a[j][NX1tylZFHN +1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    return w + f (n - 1);
}

int main () {
    int n, NX1tylZFHN, Ezo1swWH, i2;
    cin >> n;
    for (NX1tylZFHN = 1; NX1tylZFHN <= n; NX1tylZFHN = NX1tylZFHN +1) {
        for (Ezo1swWH = 1; Ezo1swWH <= n; Ezo1swWH = Ezo1swWH +1)
            for (i2 = 1; i2 <= n; i2 = i2 + 1)
                cin >> a[Ezo1swWH][i2];
        cout << f (n) << endl;
    }
    return 0;
}

