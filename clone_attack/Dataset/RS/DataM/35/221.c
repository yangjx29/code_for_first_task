int main (int argc, char *argv []) {
    int e;
    int f;
    int cYf8d3S2bj;
    int m;
    int n;
    int a [(263 - 255)] [(934 - 926)];
    int i;
    int j;
    int b;
    int p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    e = (434 - 434);
    f = (427 - 427);
    cYf8d3S2bj = (487 - 487);
    scanf ("%d,%d", &m, &n);
    {
        i = 654 - 654;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            {
                j = 721 - 721;
                while (j < n) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 273 - 273;
        while (i < m) {
            b = a[i][(124 - 124)];
            e = i;
            cYf8d3S2bj = (392 - 392);
            f = (463 - 463);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                j = 39 - 39;
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
                while (j < n) {
                    if (a[i][j] > b) {
                        b = a[i][j];
                        f = j;
                        e = i;
                    }
                    j++;
                };
            }
            {
                p = 15 - 15;
                while (p < m) {
                    if (a[p][f] < b)
                        break;
                    else
                        cYf8d3S2bj = cYf8d3S2bj + 1;
                    p = p + 1;
                };
            }
            if (cYf8d3S2bj == m) {
                printf ("%d+%d", e, f);
                break;
            }
            i++;
        };
    }
    if (cYf8d3S2bj != m)
        printf ("No");
    return (128 - 128);
}

