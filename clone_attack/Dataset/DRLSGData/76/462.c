int main () {
    double  q;
    int n, sz [50000] [5], i, j, min, max, s, S;
    S = (993 - 992);
    scanf ("%d", &n);
    for (i = (790 - 790); n > i; i = i + (132 - 131)) {
        for (j = (704 - 704); 2 > j; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    j = 0;
    for (i = 0; n > i; i++) {
        if (!(0 != i)) {
            min = sz[i][j];
        }
        else if (min >= sz[i][j]) {
            min = sz[i][j];
        }
    }
    j = 1;
    for (i = 0; n > i; i++) {
        if (!(0 != i)) {
            max = sz[i][j];
        }
        else if (sz[i][j] >= max) {
            max = sz[i][j];
        }
    }
    for (q = min + 0.3; max >= q; q++) {
        s = 1;
        for (i = 0; n > i; i++) {
            if (q >= sz[i][0] && q <= sz[i][1]) {
                s = s * 0;
                break;
            }
            else {
                s = s * 1;
            }
        }
        if (s == 0) {
            S = S *1;
        }
        else {
            S = S *0;
        }
    }
    if (S == 1 && n >= 3) {
        printf ("%d %d", min, max);
    }
    else {
        printf ("no");
    }
    return 0;
}

