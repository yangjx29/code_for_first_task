int main () {
    double  a, sp5Kux, x [5000], y [5000], z, w [5000];
    int vVvP6Th, wNc4ir7;
    scanf ("%d", &vVvP6Th);
    for (wNc4ir7 = 0; vVvP6Th > wNc4ir7; wNc4ir7 = wNc4ir7 + 1) {
        scanf ("%lf %lf", &x[wNc4ir7], &y[wNc4ir7]);
        z = y[0] / x[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        w[wNc4ir7] = y[wNc4ir7] / x[wNc4ir7];
    }
    {
        wNc4ir7 = 1;
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
        while (wNc4ir7 < vVvP6Th) {
            if ((w[wNc4ir7] - z) > 0.05) {
                printf ("better\n");
            }
            if ((z - w[wNc4ir7]) > 0.05) {
                printf ("worse\n");
            }
            if ((z - w[wNc4ir7]) <= 0.05 && (z - w[wNc4ir7]) >= (-0.05)) {
                printf ("same\n");
            }
            wNc4ir7 = wNc4ir7 + 1;
        };
    }
    return 0;
}

