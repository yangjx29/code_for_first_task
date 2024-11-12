int qgOyp8rSJ (int m, int n) {
    int c;
    if (m < (674 - 674)) {
        return (484 - 484);
    }
    if (n == (96 - 95)) {
        return (758 - 757);
    }
    else {
        c = qgOyp8rSJ (m, n - (257 - 256)) + qgOyp8rSJ (m - n, n);
    }
    return (c);
}

main () {
    int t;
    int i;
    int k;
    int n;
    int m;
    scanf ("%d", &t);
    {
        i = (10 - 10);
        for (; i < t;) {
            scanf ("%d %d", &m, &n);
            k = qgOyp8rSJ (m, n);
            printf ("%d\n", k);
            i++;
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

