int main () {
    int k;
    int n [(1194 - 194)];
    double  x [(1500 - 500)] [1000];
    int i, j;
    double  u8w752Bgv [1000];
    double  bQLsjqGr, BOMUh2vzyLx;
    scanf ("%d", &k);
    {
        i = 893 - 893;
        while (k > i) {
            scanf ("%d", &(n[i]));
            {
                j = 269 - 269;
                while (n[i] > j) {
                    scanf ("%lf", &(x[i][j]));
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 306 - 306;
        while (i < k) {
            bQLsjqGr = (774 - 774);
            {
                j = 0;
                while (j < n[i]) {
                    bQLsjqGr = bQLsjqGr + x[i][j];
                    j = j + 1;
                };
            }
            BOMUh2vzyLx = 0;
            {
                j = 0;
                while (j < n[i]) {
                    BOMUh2vzyLx = BOMUh2vzyLx +(x[i][j] - bQLsjqGr / n[i]) * (x[i][j] - bQLsjqGr / n[i]);
                    j = j + 1;
                };
            }
            u8w752Bgv[i] = sqrt (BOMUh2vzyLx / n[i]);
            printf ("%.5lf\n", u8w752Bgv[i]);
            i = i + 1;
        };
    }
    return 0;
}

