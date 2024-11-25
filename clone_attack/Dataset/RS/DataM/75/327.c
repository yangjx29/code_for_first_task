main () {
    char c;
    int i;
    int j;
    int a [2000];
    int b [2000];
    int k;
    int m;
    int p;
    int bwOFlo;
    i = 0;
    bwOFlo = 0;
    p = 0;
    scanf ("%d%c", &k, &c);
    while (!('\n' == c)) {
        a[i] = k;
        i++;
        scanf ("%d%c", &k, &c);
    }
    a[i] = k;
    {
        j = 0;
        while (i >= j) {
            scanf ("%d,", &b[j]);
            j = j + 1;
        };
    }
    printf ("%d ", i + 1);
    scanf ("%d", &b[j]);
    {
        m = 0;
        while (1000 > m) {
            for (j = 0; i >= j; j++) {
                if (m >= a[j] && m < b[j])
                    bwOFlo = bwOFlo + 1;
            }
            m++;
            if (bwOFlo >= p)
                p = bwOFlo;
            bwOFlo = 0;
        };
    }
    printf ("%d\n", p);
}

