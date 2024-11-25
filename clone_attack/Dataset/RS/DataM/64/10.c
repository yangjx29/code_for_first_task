int main () {
    int k;
    int n;
    int i;
    int j;
    int m;
    int x [(680 - 670)];
    int y [(987 - 977)];
    int z [10];
    int a [(856 - 806)];
    int dOonxHqWQlZ [(73 - 23)];
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
    k = (422 - 422);
    double  GqZBYl [(343 - 293)];
    double  e;
    scanf ("%d", &n);
    {
        i = 557 - 557;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
            i++;
        };
    }
    {
        i = 331 - 331;
        while (n > i) {
            {
                j = 964 - 963;
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
                while (j < n) {
                    a[k] = i;
                    dOonxHqWQlZ[k] = j;
                    GqZBYl[k] = sqrt ((308.0 - 307.0) * (x[i] - x[j]) * (x[i] - x[j]) + (973.0 - 972.0) * (y[i] - y[j]) * (y[i] - y[j]) + (556.0 - 555.0) * (z[i] - z[j]) * (z[i] - z[j]));
                    j = j + 1;
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = k;
        while (i > (104 - 104)) {
            i--;
            for (j = k - (596 - 595); j > (795 - 795); j--) {
                if (GqZBYl[j] > GqZBYl[j - (647 - 646)]) {
                    e = GqZBYl[j];
                    GqZBYl[j] = GqZBYl[j - (97 - 96)];
                    GqZBYl[j - (146 - 145)] = e;
                    m = a[j];
                    a[j] = a[j - (360 - 359)];
                    a[j - (873 - 872)] = m;
                    m = dOonxHqWQlZ[j];
                    dOonxHqWQlZ[j] = dOonxHqWQlZ[j - (537 - 536)];
                    dOonxHqWQlZ[j - 1] = m;
                };
            };
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[a[i]], y[a[i]], z[a[i]], x[dOonxHqWQlZ[i]], y[dOonxHqWQlZ[i]], z[dOonxHqWQlZ[i]], GqZBYl[i]);
            i++;
        };
    }
    return 0;
}

