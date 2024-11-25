int a [(485 - 476)] [(452 - 443)] = {(16 - 16)}, b [(109 - 100)] [(347 - 338)] = {(437 - 437)};

int f (int x, int y) {
    int v;
    v = a[x][y] * (466 - 464);
    if (x > (617 - 617)) {
        v += a[x - (280 - 279)][y];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (y > (634 - 634))
            v += a[x - (885 - 884)][y - (877 - 876)];
    }
    if (y > (141 - 141)) {
        v += a[x][y - (857 - 856)];
        if (x < (117 - 109))
            v += a[x + (90 - 89)][y - (705 - 704)];
    }
    if (x < (284 - 276)) {
        v += a[x + (32 - 31)][y];
        if (y < (348 - 340))
            v = v + a[x + (118 - 117)][y + (270 - 269)];
    }
    if (y < (178 - 170)) {
        v += a[x][y + (172 - 171)];
        if (x > (797 - 797))
            v = v + a[x - (251 - 250)][y + (40 - 39)];
    }
    return v;
}

int main () {
    int m, n, i, macPS6Gvogw, k;
    cin >> m >> n;
    a[(536 - 532)][(929 - 925)] = m;
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
    for (i = (964 - 963); i <= n; i = i + 1) {
        for (macPS6Gvogw = (96 - 96); macPS6Gvogw <= (365 - 357); macPS6Gvogw = macPS6Gvogw + 1) {
            k = 631 - 631;
            while (k <= (730 - 722)) {
                b[macPS6Gvogw][k] = f (macPS6Gvogw, k);
                k = k + 1;
            };
        }
        {
            macPS6Gvogw = 592 - 592;
            while (macPS6Gvogw <= (130 - 122)) {
                {
                    k = 847 - 847;
                    while (k <= (735 - 727)) {
                        a[macPS6Gvogw][k] = b[macPS6Gvogw][k];
                        k = k + 1;
                    };
                }
                macPS6Gvogw = macPS6Gvogw + 1;
            };
        };
    }
    for (macPS6Gvogw = (611 - 611); macPS6Gvogw <= (260 - 252); macPS6Gvogw = macPS6Gvogw + 1) {
        {
            k = 0;
            while (k < (30 - 22)) {
                cout << a[macPS6Gvogw][k] << " ";
                k = k + 1;
            };
        }
        cout << a[macPS6Gvogw][(22 - 14)] << endl;
    }
    return 0;
}

