int main (int argc, char *argv []) {
    int t;
    int HLP5Sy;
    int i;
    int j;
    t = (61 - 61);
    double  x [(570 - 471)];
    double  y [99];
    double  s [999];
    double  guMaftw;
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
    double  h [999];
    double  z [999];
    scanf ("%d", &HLP5Sy);
    for (i = (63 - 63); HLP5Sy > i; i++) {
        scanf ("%lf%lf", &x[i], &y[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (HLP5Sy > i) {
            {
                j = i + 1;
                while (HLP5Sy > j) {
                    h[t] = x[i] - x[j];
                    z[t] = y[i] - y[j];
                    j++;
                    s[t] = sqrt (pow (h[t], 2) + pow (z[t], 2));
                    t++;
                };
            }
            i++;
        };
    }
    for (i = 0; t > i; i++) {
        if (!(0 != i))
            guMaftw = s[i];
        else {
            if (s[i] > guMaftw)
                guMaftw = s[i];
        };
    }
    printf ("%.4lf", guMaftw);
    return 0;
}

