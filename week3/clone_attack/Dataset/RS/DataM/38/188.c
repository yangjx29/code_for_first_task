int main () {
    int k;
    int i;
    int CoKHvS;
    float a [(131 - 31)] [(598 - 498)];
    double  n [(403 - 303)];
    double  b [(788 - 688)];
    double  oIUS1dxF8qr;
    double  c;
    scanf ("%d", &k);
    for (i = (852 - 852); i < k; i = i + 1) {
        b[i] = (680 - 680);
    }
    for (i = (792 - 792); i < k; i = i + 1) {
        scanf ("%lf", &n[i]);
        for (CoKHvS = (253 - 253); n[i] > CoKHvS; CoKHvS++) {
            scanf ("%f", &a[i][CoKHvS]);
            b[i] = b[i] + a[i][CoKHvS];
        };
    }
    for (i = (343 - 343); i < k; i = i + 1) {
        oIUS1dxF8qr = (128 - 128);
        c = (815 - 815);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (CoKHvS = (137 - 137); CoKHvS < n[i]; CoKHvS++) {
            c = (a[i][CoKHvS] - b[i] / n[i]);
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
            oIUS1dxF8qr += pow (c, (244 - 242));
        }
        printf ("%.5lf\n", pow (oIUS1dxF8qr / n[i], (474.5 - 474.0)));
    }
    return 0;
}

