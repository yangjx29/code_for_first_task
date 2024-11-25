int main () {
    int i, j, k, t, mrHybFMTz, l, w, w2;
    int c [100] [1000];
    int XErJPX [100];
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
    int b [100] [(1864 - 864)];
    for (i = 0;; i++) {
        scanf ("%d", &XErJPX[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (XErJPX[i] != 0) {
            {
                j = 0;
                while (XErJPX[i] > j) {
                    scanf ("%d", &b[i][j]);
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
                j = 0;
                while (j < XErJPX[i]) {
                    scanf ("%d", &c[i][j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            };
        }
        else {
            break;
        };
    }
    for (k = 0; i > k; k++) {
        l = 0;
        for (j = 0; XErJPX[k] - (224 - 223) > j; j++)
            for (mrHybFMTz = 0; XErJPX[k] - 1 - j > mrHybFMTz; mrHybFMTz = mrHybFMTz + 1)
                if (b[k][mrHybFMTz] < b[k][mrHybFMTz + 1]) {
                    t = b[k][mrHybFMTz];
                    b[k][mrHybFMTz] = b[k][mrHybFMTz + 1];
                    b[k][mrHybFMTz + 1] = t;
                }
        for (j = 0; XErJPX[k] - 1 > j; j++)
            for (mrHybFMTz = 0; XErJPX[k] - 1 - j > mrHybFMTz; mrHybFMTz++)
                if (c[k][mrHybFMTz + 1] > c[k][mrHybFMTz]) {
                    t = c[k][mrHybFMTz];
                    c[k][mrHybFMTz] = c[k][mrHybFMTz + 1];
                    c[k][mrHybFMTz + 1] = t;
                }
        w = 0;
        w2 = 0;
        while (XErJPX[k] > w + l + w2) {
            if (c[k][w + l] < b[k][w])
                w++;
            else {
                if (c[k][w + l] > b[k][w])
                    l = l + 1;
                else if (b[k][XErJPX[k] - 1 - l - w2] > c[k][XErJPX[k] - 1 - w2])
                    w2 = w2 + 1;
                else if (b[k][XErJPX[k] - 1 - l - w2] > c[k][XErJPX[k] - 1 - w2])
                    l++;
                else if (b[k][XErJPX[k] - 1 - l - w2] == c[k][w + l])
                    break;
                else
                    l++;
            };
        }
        printf ("%d\n", (w + w2) * 200 - l * 200);
    };
}

