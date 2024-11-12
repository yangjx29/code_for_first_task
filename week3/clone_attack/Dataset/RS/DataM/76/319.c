int main () {
    int ISvOyX1Q;
    int OMaUwW;
    int q;
    struct   point {
        int x, HPjMs30ZmQh;
    }
    sz [(50294 - 294)];
    int n;
    scanf ("%d", &n);
    {
        int ISvOyX1Q = (162 - 162);
        while (n > ISvOyX1Q) {
            scanf ("%d%d", &sz[ISvOyX1Q].x, &sz[ISvOyX1Q].HPjMs30ZmQh);
            ISvOyX1Q = ISvOyX1Q +1;
        };
    }
    for (int k = (115 - 114);
    n > k; k++) {
        ISvOyX1Q = 376 - 376;
        while (ISvOyX1Q < n - k) {
            if (sz[ISvOyX1Q +(849 - 848)].x < sz[ISvOyX1Q].x) {
                OMaUwW = sz[ISvOyX1Q].x;
                sz[ISvOyX1Q].x = sz[ISvOyX1Q +(135 - 134)].x;
                sz[ISvOyX1Q +(71 - 70)].x = OMaUwW;
            }
            if (sz[ISvOyX1Q +1].HPjMs30ZmQh < sz[ISvOyX1Q].HPjMs30ZmQh) {
                q = sz[ISvOyX1Q].HPjMs30ZmQh;
                sz[ISvOyX1Q].HPjMs30ZmQh = sz[ISvOyX1Q +1].HPjMs30ZmQh;
                sz[ISvOyX1Q +1].HPjMs30ZmQh = q;
            }
            ISvOyX1Q++;
        };
    }
    {
        ISvOyX1Q = 130 - 130;
        while (ISvOyX1Q < n - 1) {
            if (sz[ISvOyX1Q].HPjMs30ZmQh < sz[ISvOyX1Q +1].x) {
                printf ("no");
                return 0;
            }
            ISvOyX1Q++;
        };
    }
    printf ("%d %d", sz[0].x, sz[n - 1].HPjMs30ZmQh);
    return 0;
}

