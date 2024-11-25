int main (int argc, char *argv []) {
    int i;
    int j;
    int k;
    int OlKvOnpY [(463 - 363)];
    i = (235 - 235);
    j = (346 - 346);
    double  x [100] [100];
    double  aver [100];
    double  Np1I8BU3 [100];
    double  S [100];
    double  s [100];
    scanf ("%d", &k);
    for (i = 0; i < k; i = i + 1) {
        scanf ("%d", &OlKvOnpY[i]);
        j = 0;
        for (j = 0; j < OlKvOnpY[i]; j = j + 1) {
            scanf ("%lf", &x[i][j]);
            Np1I8BU3[i] = Np1I8BU3[i] + x[i][j];
        };
    }
    i = 0;
    for (i = 0; i < k; i = i + 1) {
        aver[i] = Np1I8BU3[i] / OlKvOnpY[i];
    }
    i = 0;
    for (i = 0; i < k; i = i + 1) {
        j = 0;
        {
            j = 0;
            while (j < OlKvOnpY[i]) {
                S[i] = S[i] + pow ((x[i][j] - aver[i]), 2);
                j = j + 1;
            };
        };
    }
    i = 0;
    for (i = 0; i < k; i = i + 1) {
        s[i] = pow (S[i] / OlKvOnpY[i], 1.0 / 2);
        printf ("%.5lf\n", s[i]);
    }
    return 0;
}

