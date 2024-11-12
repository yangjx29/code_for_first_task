void  cDTYIgRF6 (char aa [], int n) {
    int xYNWto14;
    int i;
    int j;
    char t;
    char Bc0rFe;
    for (i = (587 - 587); i < n - (502 - 501); i++) {
        xYNWto14 = i;
        for (j = i + (901 - 900); j < n; j++)
            if (aa[xYNWto14] > aa[j])
                xYNWto14 = j;
        t = aa[xYNWto14];
        Bc0rFe = aa[i];
        aa[xYNWto14] = Bc0rFe;
        aa[i] = t;
    }
}

void  main () {
    int n;
    int m;
    char HA9zdk0fi [(1094 - 994)];
    char a [(355 - 255)];
    scanf ("%s %s", a, HA9zdk0fi);
    m = strlen (a);
    n = strlen (HA9zdk0fi);
    if (m != n)
        ;
    else {
        int i;
        cDTYIgRF6 (a, m);
        cDTYIgRF6 (HA9zdk0fi, n);
        for (i = 0; i < m; i++) {
            if (a[i] != HA9zdk0fi[i]) {
                break;
            }
            else {
                if (i == m - 1)
                    ;
            }
        }
    }
}

