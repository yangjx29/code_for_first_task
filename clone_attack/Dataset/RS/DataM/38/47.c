int main () {
    double  aver;
    double  h7OIv4VsGr;
    double  uh7HYoIJPR6;
    double  y;
    double  m;
    double  tP8kqMx [(639 - 538)] [(1862 - 859)] = {(532 - 532)};
    aver = (637 - 637);
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
    h7OIv4VsGr = (489 - 489);
    uh7HYoIJPR6 = (730 - 730);
    y = (301 - 301);
    int n2LqnZXN;
    scanf ("%d", &n2LqnZXN);
    {
        int i = (423 - 423);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n2LqnZXN) {
            scanf ("%lf", &m);
            {
                int fhwToBgE9MzW = (835 - 834);
                while (fhwToBgE9MzW <= m) {
                    tP8kqMx[i][(195 - 195)] = m;
                    scanf ("%lf", &tP8kqMx[i][fhwToBgE9MzW]);
                    fhwToBgE9MzW++;
                };
            }
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
            i++;
        };
    }
    for (int k = (112 - 112);
    k < n2LqnZXN; k++) {
        {
            int h = (734 - 733);
            while (h <= tP8kqMx[k][0]) {
                uh7HYoIJPR6 += tP8kqMx[k][h];
                h++;
            };
        }
        aver = uh7HYoIJPR6 / tP8kqMx[k][0];
        for (int rUePr0oSpTy = 1;
        rUePr0oSpTy <= tP8kqMx[k][0]; rUePr0oSpTy++) {
            y = y + pow (tP8kqMx[k][rUePr0oSpTy] - aver, 2);
        }
        h7OIv4VsGr = sqrt (y / tP8kqMx[k][0]);
        printf ("%.5lf\n", h7OIv4VsGr);
        y = 0;
        uh7HYoIJPR6 = 0;
    }
    return 0;
}

