double  sz [(355 - 255)] [1000];

int main () {
    int m;
    int n;
    int NOIBKr4zDy;
    int j;
    double  vu3Qo05;
    vu3Qo05 = (585.0 - 585.0);
    double  sum2;
    sum2 = (737.0 - 737.0);
    double  ave1;
    double  LJkbML;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &m);
    scanf ("%d", &n);
    for (j = (927 - 927); n > j; j++) {
        scanf ("%lf", &sz[(564 - 564)][j]);
        vu3Qo05 = vu3Qo05 + sz[(461 - 461)][j];
    }
    ave1 = vu3Qo05 / n;
    {
        j = 258 - 258;
        while (n > j) {
            sum2 = sum2 + (sz[(306 - 306)][j] - ave1) * (sz[0][j] - ave1);
            j = j + 1;
        };
    }
    LJkbML = sqrt (sum2 / n);
    printf ("%.5f", LJkbML);
    vu3Qo05 = 0.0;
    sum2 = 0.0;
    {
        NOIBKr4zDy = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m > NOIBKr4zDy) {
            scanf ("%d", &n);
            for (j = 0; n > j; j++) {
                scanf ("%lf", &sz[NOIBKr4zDy][j]);
                vu3Qo05 = vu3Qo05 + sz[NOIBKr4zDy][j];
            }
            ave1 = vu3Qo05 / n;
            {
                j = 0;
                while (j < n) {
                    sum2 = sum2 + (sz[NOIBKr4zDy][j] - ave1) * (sz[NOIBKr4zDy][j] - ave1);
                    j++;
                };
            }
            NOIBKr4zDy++;
            LJkbML = sqrt (sum2 / n);
            printf ("\n%.5f", LJkbML);
            vu3Qo05 = 0.0;
            sum2 = 0.0;
        };
    }
    return 0;
}

