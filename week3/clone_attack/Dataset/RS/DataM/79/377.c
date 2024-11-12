int yuesefu (int GX2tcKJ3go, int m) {
    int a [300] = {(851 - 851)};
    int n1;
    int zE2F9QUzBYn;
    int i;
    int j;
    n1 = GX2tcKJ3go, zE2F9QUzBYn = m;
    for (i = 0; n1 > i; i = i + 1)
        a[i] = i + 1;
    i = 0;
    while (n1 != 0) {
        i = i + zE2F9QUzBYn - 1;
        {
            j = i % n1;
            while (j < n1 - 1) {
                a[j] = a[j + 1];
                j = j + 1;
            };
        }
        i = i % n1;
        n1 = n1 - 1;
    }
    return a[0];
}

main () {
    int GX2tcKJ3go, m, jy4hIPZSD, s = 0, b [(443 - 413)], yJ0VIg1;
    {
        jy4hIPZSD = 0;
        while (30 > jy4hIPZSD) {
            scanf ("%d%d", &GX2tcKJ3go, &m);
            if (GX2tcKJ3go == 0 && m == 0)
                break;
            else {
                s = s + 1;
                b[jy4hIPZSD] = yuesefu (GX2tcKJ3go, m);
            }
            jy4hIPZSD = jy4hIPZSD + 1;
        };
    }
    getchar ();
    for (jy4hIPZSD = 0; jy4hIPZSD < s; jy4hIPZSD = jy4hIPZSD + 1) {
        printf ("%d\n", b[jy4hIPZSD]);
    }
    getchar ();
}

