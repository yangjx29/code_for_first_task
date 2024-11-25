int main () {
    double  kn2k3fxlE;
    int i;
    int j;
    int n;
    double  a [1000] [2];
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
    scanf ("%d", &n);
    {
        i = 840 - 840;
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
            scanf ("%lf %lf", &a[i][(462 - 462)], &a[i][1]);
            i++;
        };
    }
    kn2k3fxlE = sqrt ((a[0][0] - a[1][0]) * (a[0][0] - a[1][0]) + (a[0][1] - a[1][1]) * (a[0][1] - a[1][1]));
    {
        i = 1;
        while (n > i) {
            {
                j = i - 1;
                while (j >= 0) {
                    if (sqrt ((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1])) > kn2k3fxlE)
                        kn2k3fxlE = sqrt ((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]));
                    j--;
                };
            }
            i++;
        };
    }
    printf ("%.4lf\n", kn2k3fxlE);
    return 0;
}

