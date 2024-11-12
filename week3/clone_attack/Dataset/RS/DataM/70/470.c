int main (int argc, char *argv []) {
    double  dis;
    dis = 0;
    double  x [(805 - 755)];
    double  wHUgf91apD [(275 - 225)];
    double  z [400];
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
    int num, i, a, b, na = (662 - 661);
    scanf ("%d", &num);
    for (i = (216 - 215); i <= num; i = i + 1) {
        scanf ("%lf", &x[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &wHUgf91apD[i]);
    }
    for (a = 1; a <= num; a = a + 1) {
        for (b = a + 1; b <= num; b++) {
            z[na] = (x[a] - x[b]) * (x[a] - x[b]) + (wHUgf91apD[a] - wHUgf91apD[b]) * (wHUgf91apD[a] - wHUgf91apD[b]);
            if (z[na] > dis) {
                dis = z[na];
            }
            na = na + 1;
        };
    }
    printf ("%.4lf\n", sqrt (dis));
    return 0;
}

