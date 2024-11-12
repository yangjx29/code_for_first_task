int main () {
    int nNqZrDpnP2e, col, D1hcfTSBi, j, MU6v5pmqC = 0;
    int a [(336 - 235)] [101] = {0};
    scanf ("%d%d", &nNqZrDpnP2e, &col);
    {
        D1hcfTSBi = 516 - 515;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (D1hcfTSBi <= nNqZrDpnP2e) {
            {
                j = 1;
                while (col >= j) {
                    scanf ("%d", &a[D1hcfTSBi][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            D1hcfTSBi++;
        };
    }
    for (D1hcfTSBi = 0, j = 0;;) {
        {
            D1hcfTSBi++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
            while (1) {
                if (a[D1hcfTSBi][j] == 0)
                    break;
                printf ("%d\n", a[D1hcfTSBi][j]);
                MU6v5pmqC++;
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
                a[D1hcfTSBi][j] = 0;
                j++;
            };
        }
        if (MU6v5pmqC == nNqZrDpnP2e * col)
            break;
        {
            j = j - 1;
            D1hcfTSBi = D1hcfTSBi +1;
            while (1) {
                if (a[D1hcfTSBi][j] == 0)
                    break;
                MU6v5pmqC++;
                printf ("%d\n", a[D1hcfTSBi][j]);
                a[D1hcfTSBi][j] = 0;
                D1hcfTSBi++;
            };
        }
        if (MU6v5pmqC == nNqZrDpnP2e * col)
            break;
        {
            j = j - 1;
            D1hcfTSBi--;
            while (1) {
                if (a[D1hcfTSBi][j] == 0)
                    break;
                MU6v5pmqC++;
                printf ("%d\n", a[D1hcfTSBi][j]);
                a[D1hcfTSBi][j] = 0;
                j--;
            };
        }
        if (MU6v5pmqC == nNqZrDpnP2e * col)
            break;
        {
            D1hcfTSBi--;
            j++;
            while (1) {
                if (a[D1hcfTSBi][j] == 0)
                    break;
                MU6v5pmqC++;
                printf ("%d\n", a[D1hcfTSBi][j]);
                a[D1hcfTSBi][j] = 0;
                D1hcfTSBi--;
            };
        }
        if (MU6v5pmqC == nNqZrDpnP2e * col)
            break;
    }
    return 0;
}

