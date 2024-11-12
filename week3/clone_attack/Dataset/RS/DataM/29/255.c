int main () {
    double  jg [10000] = {0};
    double  fs [10000] = {0};
    int xJvqX0syGQ [(10019 - 19)] [(991 - 989)];
    int i;
    int j;
    int n;
    int sz [(10894 - 894)];
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
    xJvqX0syGQ[(588 - 588)][(292 - 292)] = (280 - 278);
    xJvqX0syGQ[(685 - 685)][(115 - 114)] = (526 - 525);
    xJvqX0syGQ[(609 - 608)][(305 - 305)] = 3;
    xJvqX0syGQ[(459 - 458)][(201 - 200)] = (253 - 251);
    scanf ("%d", &n);
    for (i = (433 - 433); i < n; i = i + 1) {
        scanf ("%d", &sz[i]);
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
        i = 2;
        while (i < (10510 - 510)) {
            xJvqX0syGQ[i][(197 - 197)] = xJvqX0syGQ[i - 1][(811 - 811)] + xJvqX0syGQ[i - 2][(446 - 446)];
            xJvqX0syGQ[i][1] = xJvqX0syGQ[i - 1][1] + xJvqX0syGQ[i - 2][1];
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 10000) {
            fs[i] = (double ) xJvqX0syGQ[i][0] / xJvqX0syGQ[i][1];
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
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        j = 0;
        while (j < sz[i]) {
            jg[i] = jg[i] + fs[j];
            j = j + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%.3lf\n", jg[i]);
    }
    return 0;
}

