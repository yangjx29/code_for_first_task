int main () {
    int q;
    int p;
    int n;
    int i;
    int j;
    q = -1;
    p = -1;
    double  sh [(188 - 88)], fe [120], me [120], t, min1, LWhfEcs;
    char a [100] [(623 - 613)];
    scanf ("%d", &n);
    {
        i = 645 - 645;
        while (i < n) {
            scanf ("%s %lf", a[i], &sh[i]);
            i = i + 1;
        };
    }
    {
        i = 833 - 833;
        while (i < n) {
            if (strcmp (a[i], "male") == 0) {
                p = p + 1;
                me[p] = sh[i];
            }
            else if (!(0 != strcmp (a[i], "female"))) {
                q = q + 1;
                fe[q] = sh[i];
            }
            i = i + 1;
        };
    }
    for (i = 0; p >= i; i++) {
        j = i + 1;
        while (p >= j) {
            if (me[j] < me[i]) {
                t = me[i];
                me[i] = me[j];
                me[j] = t;
            }
            j = j + 1;
        };
    }
    printf ("%.2lf", me[0]);
    {
        i = 0;
        while (i <= q) {
            for (j = i + 1; j <= q; j = j + 1)
                if (fe[i] < fe[j]) {
                    t = fe[i];
                    fe[i] = fe[j];
                    fe[j] = t;
                }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= p) {
            printf (" %.2lf", me[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i <= q) {
            printf (" %.2lf", fe[i]);
            i++;
        };
    }
    return 0;
}

