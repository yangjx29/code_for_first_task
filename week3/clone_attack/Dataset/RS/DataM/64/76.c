int main () {
    int a [(449 - 439)], b [10], c [10], z [(1037 - 987)] [6];
    int n;
    int i;
    int j;
    int t;
    int XQcrjK;
    int LD3gIqzBWFwl;
    int m;
    int NIDRzTZ4;
    double  ZQqncwhW [50];
    double  CvTjBEXL;
    NIDRzTZ4 = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d%d", &(a[i]), &(b[i]), &(c[i]));
            i++;
        };
    }
    t = 0;
    {
        i = 0;
        while (i < n) {
            for (j = i + 1; j < n; j++) {
                ZQqncwhW[t] = sqrt ((a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j]) + (c[j] - c[i]) * (c[j] - c[i]));
                z[t][0] = a[i];
                z[t][1] = b[i];
                z[t][2] = c[i];
                z[t][3] = a[j];
                z[t][4] = b[j];
                z[t][5] = c[j];
                t++;
            }
            i++;
        };
    }
    CvTjBEXL = 0;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= t) {
            {
                j = 0;
                while (j < t - i) {
                    if (ZQqncwhW[j] < ZQqncwhW[j + 1]) {
                        CvTjBEXL = ZQqncwhW[j + 1];
                        ZQqncwhW[j + 1] = ZQqncwhW[j];
                        ZQqncwhW[j] = CvTjBEXL;
                        for (m = 0; m < 6; m++) {
                            NIDRzTZ4 = z[j + 1][m];
                            z[j + 1][m] = z[j][m];
                            z[j][m] = NIDRzTZ4;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        XQcrjK = 0;
        while (XQcrjK < t) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", z[XQcrjK][0], z[XQcrjK][1], z[XQcrjK][2], z[XQcrjK][3], z[XQcrjK][4], z[XQcrjK][5], ZQqncwhW[XQcrjK]);
            XQcrjK++;
        };
    }
    return 0;
}

