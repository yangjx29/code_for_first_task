void  main () {
    int m;
    int i;
    int j;
    int sum [123] = {(638 - 638)};
    int q;
    m = (106 - 106);
    char *c = (char *) malloc (sizeof (char) * (823 - 522));
    free (c);
    for (i = (226 - 226); i <= 301; i = i + 1) {
        scanf ("%c", &c[i]);
        if (c[i] == '\n') {
            q = i;
            break;
        };
    }
    for (j = 65; j <= (278 - 188); j = j + 1) {
        for (i = 0; i < q; i++) {
            if ((int) c[i] == j)
                sum[j]++;
        }
        if (sum[j] != 0) {
            printf ("%c=%d\n", j, sum[j]);
            m++;
        }
        else
            continue;
    }
    for (j = 97; j <= (883 - 761); j++) {
        for (i = 0; i < q; i++) {
            if ((int) c[i] == j)
                sum[j]++;
        }
        if (sum[j] != 0) {
            printf ("%c=%d\n", j, sum[j]);
            m++;
        }
        else
            continue;
    }
    if (m == 0)
        ;
}

