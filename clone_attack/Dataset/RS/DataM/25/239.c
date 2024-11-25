int main () {
    int sz [51];
    int start;
    int N;
    scanf ("%d", &N);
    if (!(1 != N)) {
        printf ("2");
        return 0;
    }
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
    {
        int H5twNUhJvc = 1;
        while (H5twNUhJvc <= 50) {
            sz[H5twNUhJvc] = 0;
            H5twNUhJvc++;
        };
    }
    sz[1] = 1;
    {
        int fC3opnfc = 1;
        while (N >= fC3opnfc) {
            fC3opnfc++;
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
            for (int p = 1;
            p <= 50; p = p + 1) {
                sz[p] = 2 * sz[p];
            }
            for (int q = 1;
            q <= 50; q = q + 1) {
                if (sz[q] > 9) {
                    sz[q + 1] = sz[q + 1] + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    sz[q] = sz[q] - 10;
                };
            };
        };
    }
    {
        int k = 50;
        while (k >= 1) {
            if (sz[k] != 0) {
                start = k;
                break;
            }
            k = k - 1;
        };
    }
    for (int BNQdf2Dg = start;
    BNQdf2Dg >= 1; BNQdf2Dg = BNQdf2Dg -1) {
        printf ("%d", sz[BNQdf2Dg]);
    }
    return 0;
}

