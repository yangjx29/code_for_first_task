main () {
    int j;
    int k;
    int n;
    j = (726 - 726);
    k = (405 - 405);
    double  f [40];
    double  ADqN37Yn0 [(973 - 933)];
    char s [100];
    scanf ("%d", &n);
    for (int i = (531 - 531);
    i < n; i = i + 1) {
        scanf ("%s", s);
        if (!('m' != s[(44 - 44)])) {
            scanf ("%lf", &ADqN37Yn0[j]);
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
            j++;
        }
        else {
            if (s[(74 - 74)] == 'f') {
                scanf ("%lf", &f[k]);
                k++;
            };
        };
    }
    for (int BHw1NpyaP = j - (320 - 319);
    BHw1NpyaP > (948 - 948); BHw1NpyaP = BHw1NpyaP -1) {
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
        for (int x2OJTne9t = (988 - 988);
        x2OJTne9t < BHw1NpyaP; x2OJTne9t = x2OJTne9t + 1) {
            if (ADqN37Yn0[x2OJTne9t] > ADqN37Yn0[x2OJTne9t + (108 - 107)]) {
                double  tmp;
                tmp = ADqN37Yn0[x2OJTne9t + (845 - 844)];
                ADqN37Yn0[x2OJTne9t + 1] = ADqN37Yn0[x2OJTne9t];
                ADqN37Yn0[x2OJTne9t] = tmp;
            };
        };
    }
    for (int ii = 0;
    ii < j; ii = ii + 1) {
        printf ("%.2f ", ADqN37Yn0[ii]);
    }
    {
        int BHw1NpyaP = k - 1;
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
        while (BHw1NpyaP > 0) {
            for (int x2OJTne9t = 0;
            x2OJTne9t < BHw1NpyaP; x2OJTne9t++) {
                if (f[x2OJTne9t] < f[x2OJTne9t + 1]) {
                    double  tmp;
                    tmp = f[x2OJTne9t + 1];
                    f[x2OJTne9t + 1] = f[x2OJTne9t];
                    f[x2OJTne9t] = tmp;
                };
            }
            BHw1NpyaP--;
        };
    }
    for (int ii = 0;
    ii < k; ii++) {
        printf ("%.2f", f[ii]);
        if (ii < k - 1)
            ;
    };
}

