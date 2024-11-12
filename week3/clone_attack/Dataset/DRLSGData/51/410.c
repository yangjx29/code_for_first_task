void  main () {
    char a [500];
    int i, j, n, m, k, time [500] = {0}, max = 1, p;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = 0; (strlen (a) - n) >= i; i++) {
        for (k = i; k <= (strlen (a) - n); k++) {
            p = 0;
            for (j = 0; n > j; j++) {
                if (!(a[i + j] != a[k + j]))
                    p++;
            }
            if (!(n != p))
                time[i]++;
        }
    }
    for (i = 0; (strlen (a) - n) >= i; i++) {
        if (max <= time[i]) {
            max = time[i];
        }
    }
    if (max <= 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= (strlen (a) - n); i++) {
            if (time[i] == max) {
                for (j = 0; j < n; j++) {
                    printf ("%c", a[i + j]);
                }
            }
        }
    }
}

