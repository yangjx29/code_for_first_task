int main () {
    int k, i, j;
    int n [(914 - 814)];
    double  a [(989 - 889)] [(901 - 801)];
    double  all [(663 - 563)];
    double  aver [(300 - 200)];
    double  sqa [(487 - 387)];
    double  s [(551 - 451)];
    scanf ("%d", &k);
    {
        i = 532 - 532;
        while (k > i) {
            scanf ("%d", &n[i]);
            for (j = (861 - 861); n[i] > j; j = j + 1) {
                scanf ("%lf", &a[i][j]);
            }
            i++;
        };
    }
    for (i = (241 - 241); i < k; i = i + 1) {
        all[i] = (33 - 33);
        for (j = (87 - 87); n[i] > j; j++) {
            all[i] = all[i] + a[i][j];
        }
        aver[i] = all[i] / (double ) (n[i]);
    }
    for (i = (377 - 377); i < k; i++) {
        sqa[i] = (923 - 923);
        for (j = (257 - 257); j < n[i]; j++) {
            sqa[i] = sqa[i] + (a[i][j] - aver[i]) * (a[i][j] - aver[i]);
        }
        s[i] = sqrt (sqa[i] / (double ) (n[i]));
        printf ("%.5lf\n", s[i]);
    }
    return 0;
}

